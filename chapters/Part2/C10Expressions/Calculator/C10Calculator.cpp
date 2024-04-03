/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C10Calculator.h"
#include <map>
#include <iostream>

namespace C10 {
    
    TokenStream tokenStream{std::cin};
    int noOfErrors = 0;
    std::map<std::string, double> table;
    
    double printError(const std::string& msg) {
        noOfErrors++;
        std::cerr << "Error: " << msg << std::endl;
        return 1;
    }
    
    TokenStream::TokenStream(std::istream& lIsRef) 
        : isPtr{&lIsRef},
          owns{false} {
        
    }
    TokenStream::TokenStream(std::istream* lIsPtr) 
        : isPtr{lIsPtr},
          owns{true} {
        
    }
    TokenStream::~TokenStream() {
        closeStream();
    }
    void TokenStream::setInput(std::istream& lIsRef) {
        closeStream();
        isPtr = &lIsRef;
        owns = false;
    }
    void TokenStream::setInput(std::istream* lIsPtr) {
        closeStream();
        isPtr = lIsPtr;
        owns = true;
    }
    Token TokenStream::getToken() {
        char c = 0;
        
        //skip whitespace except '\n'
        do {
            if(!isPtr->get(c)) {
                return currToken = { Kind::end };  //{ Kind::end, "", 0}
            }
        }
        while(c != '\n' && isspace(c));
        *isPtr >> c;
        
        switch(c) {
            case 0:
                //can be 
                /*  currToken.kind = Kind::end;
                    currToken.stringValue = "";
                    currToken.numberValue = 0;
                 */
                return currToken = { Kind::end /*, "", 0*/ };    //assign and return; 
            case ';':
            case '\n':
                return currToken = { Kind::print }; //print result with ';' or '\n' on the stream
            case '*':
            case '/':
            case '+':
            case '-':
            case '(':
            case ')':
            case '=':
                return currToken = { static_cast<Kind>(c) /*, "", 0 */ };    //assign and return; 
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                isPtr->putback(c);  //put first digit (or .) back into the input stream
                *isPtr >> currToken.numberValue;    //read the number into currToken numberValue
                currToken.kind = Kind::number;
                return currToken;
            default:    //it must be a name  name, name = , or error
                if(isalpha(c)) {
                    currToken.stringValue = c;
                    while(isPtr->get(c) && isalnum(c)) {
                        currToken.stringValue += c;     //apend 'c' to end of the stringValue.
                    }
                    isPtr->putback(c);  //put the first character back into the input stream
                    return currToken = { Kind::name };
                }
                printError("Bad Token");
                return currToken = {Kind::print};
        }
    }
    void TokenStream::closeStream() {
        if(owns) {
            delete isPtr;
        }
    }
    const Token& TokenStream::currentToken() {
        return currToken;
    }
    
    double addAndSubstract(bool bGetToken) {
        
        double left = multiplyAndDivide(bGetToken);
        
        while(true) {
            switch(tokenStream.currentToken().kind) {
                case Kind::plus:
                    left += multiplyAndDivide(true);
                    break;
                case Kind::minus:
                    left -= multiplyAndDivide(true);
                    break;
                default:
                    return left;
            }
        }
    }   //End addAndSubstract
    
    double multiplyAndDivide(bool bGetToken) {
        
        double left = primaries(bGetToken);
        
        while(true) {
            switch(tokenStream.currentToken().kind) {
                case Kind::multiply:
                    left *= primaries(true);
                    break;
                case Kind::divide:
                    if(double divisor = primaries(true)) { //check for divide by 0
                        left /= divisor;
                        break;
                    }
                    return printError("Divide by 0");    
                default:
                    return left;
            }
        }
        
    }   //and multiplyAndDivide
    
    double primaries(bool bGetToken) {
        if(bGetToken) {
            tokenStream.getToken();  //read next Token ?!?!
        }
        double value = 0;
        double result = 0;
        switch(tokenStream.currentToken().kind) {
            case Kind::number:  //floating point constant
                value = tokenStream.currentToken().numberValue;
                tokenStream.getToken();
                return value;
            case Kind::name:
                value = table[tokenStream.currentToken().stringValue];   //Array?!?     //find corresponding.
                if(tokenStream.getToken().kind == Kind::assign) {           // seen '=' assignment.
                    value = addAndSubstract(true);      
                }
                return value;
                break;
            case Kind::minus:
                return -primaries(true);
            case Kind::leftParantesis:
                result = addAndSubstract(true);
                if(tokenStream.currentToken().kind != Kind::rightParantesis) {
                    return printError("')' exptected");
                }
                tokenStream.getToken(); //eat ')'
                return result;
            default:
                return printError("Primary expected!");
        }
    }   //end primaries()
    
    void calculator() {
        while(true) {
            tokenStream.getToken();
            if(tokenStream.currentToken().kind == Kind::end) {
                break;
            }
            if(tokenStream.currentToken().kind == Kind::print) {
                continue;
            }
            std::cout << addAndSubstract(false) << '\n';
        }
    }
    void runProgram() {
        table["pi"] = 3.141592653589;
        table["exponent"] = 2.7182818;
        
        calculator();
        
       int totalErrors = noOfErrors;
       std::cout << "Total Errors: " << totalErrors << std::endl;
    }
    void testDecltype() {
//        std::cout << decltype(tokenStream) << std::endl;
    }
}