/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C10Calculator.h
 * Author: default
 *
 * Created on March 11, 2024, 11:14 AM
 */

#ifndef C10CALCULATOR_H
#define C10CALCULATOR_H

#include <string>
#include <istream>

namespace C10 {
    
    enum class Kind : char {    //->return char.
        name,
        number,
        end,
        plus = '+',
        minus = '-',
        multiply = '*',
        divide = '/',
        print = ';',
        assign = '=',
        leftParantesis = '(',
        rightParantesis = ')',
    };
    
    struct Token {
        Kind kind;
        std::string stringValue;
        double numberValue;
    };
    
    class TokenStream {
    public:
        TokenStream(std::istream& lIsRef);
        TokenStream(std::istream* lIsPtr);
        ~TokenStream();
        
        Token getToken();       //read and return next token.
        const Token& currentToken();  //most recently read token.
        
        void setInput(std::istream& lIsRef);
        void setInput(std::istream* lIsPtr);
    private:
        void closeStream();
        
        std::istream* isPtr;
        bool owns;
        Token currToken{Kind::end, "", 0};
    };
    
    extern double printError(const std::string& msg);
    extern double addAndSubstract(bool bGetToken);
    extern double multiplyAndDivide(bool bGetToken);
    extern double primaries(bool bGetToken); //handle primaries.
    extern void calculator();
    extern void runProgram();
    extern void testDecltype();
}

#endif /* C10CALCULATOR_H */

