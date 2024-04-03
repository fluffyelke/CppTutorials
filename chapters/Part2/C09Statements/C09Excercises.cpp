/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <cctype>
#include <iostream>
#include <cstring>
#include <complex>

#include "C09Excercises.h"

namespace C09 {
    
    int decimalCharToInt(char c) {
        switch (c) {
            case 48:
                return 0;
            case 49:
                return 1;
            case 50:
                return 2;
            case 51:
                return 3;
            case 52:
                return 4;
            case 53:
                return 5;
            case 54:
                return 6;
            case 55:
                return 7;
            case 56:
                return 8;
            case 57:
                return 9;
        }
        return 0;
    }
    int octCharToInt(char c) {
        switch (c) {
            case 48:
                return 0;
            case 49:
                return 1;
            case 50:
                return 2;
            case 51:
                return 3;
            case 52:
                return 4;
            case 53:
                return 5;
            case 54:
                return 6;
            case 55:
                return 7;
        }
        return 0;
    }
    int hexCharToInt(char c) {
        switch (c) {
            case 48:
                return 0;
            case 49:
                return 1;
            case 50:
                return 2;
            case 51:
                return 3;
            case 52:
                return 4;
            case 53:
                return 5;
            case 54:
                return 6;
            case 55:
                return 7;
            case 56:
                return 8;
            case 57:
                return 9;
            case 65:
            case 97:
                return 10;
            case 66:
            case 98:
                return 11;
            case 67:
            case 99:
                return 12;
            case 68:
            case 100:
                return 13;
            case 69:
            case 101:
                return 14;
            case 70:
            case 102:
                return 15;
        }
        return 0;
    }
    int myAtoi(const char* myStr) {
        int result = 0;
        int multiplier = 1;
        int index = strlen(myStr);
//        int multiplier = std::pow(10, index - 1);
        std::cout << index << std::endl;
        
        auto getIntFromAsciiChar = [] (char c) -> int {
            switch (c) {
                case 48:
                    return 0;
                case 49:
                    return 1;
                case 50:
                    return 2;
                case 51:
                    return 3;
                case 52:
                    return 4;
                case 53:
                    return 5;
                case 54:
                    return 6;
                case 55:
                    return 7;
                case 56:
                    return 8;
                case 57:
                    return 9;
            }
            return 0;
        };
        while(index != 0) {
            index--;
            if(!isdigit(myStr[index])) {
                return -1;
            }
            std::cout << myStr[index] << " " << multiplier << std::endl;
            result += (getIntFromAsciiChar(myStr[index]) * multiplier);
            std::cout << "result: " << result << std::endl;
            multiplier *= 10;
        }
        return result;
    }
    void testEx04() {
        int result = myAtoi("12341512");
        std::cout << result << std::endl;
    }
    
    int improvedAtoi(const char* myStr, NumericSystem type) {
        int result = 0;
        int multiplier = 1;
        int index = strlen(myStr);
        std::cout << index << std::endl;
        while(index != 0) {
            index--;
//            if(!isdigit(myStr[index])) {
//                return -1;
//            }
            std::cout << myStr[index] << " " << multiplier << std::endl;
            switch(type) {
                case NumericSystem::decimal:
                    result += (decimalCharToInt(myStr[index]) * multiplier);
                    multiplier *= 10;
                    break;
                case NumericSystem::hex:
                    result += (hexCharToInt(myStr[index]) * multiplier);
                    multiplier *= 16;
                    break;
                case NumericSystem::octal:
                    result += (octCharToInt(myStr[index]) * multiplier);
                    multiplier *= 8;
                    break;
            }
            std::cout << "result: " << result << std::endl;
        }
        return result;
    }
    void improvedAtoiEx04() {
//        NumericSystem type = NumericSystem::hex;
        int result = improvedAtoi("056234", NumericSystem::octal);
        std::cout << result << std::endl;
        
        char* arr;
        arr = myIntToStr(123412343, arr);
        for(int i = 0; i < strlen(arr); i++) {
            std::cout << (int)arr[i];
        }
        std::cout << std::endl;
//        char* begPtr = arr;
//        while(*begPtr != '\0') {
//            std::cout << (int)(*begPtr);
//            begPtr++;
//        } 
//        std::cout << std::endl;
        delete arr;
    }
    
    char* myIntToStr(int number, char str[]) {
        int length = 0;
        int tempNumber = number;
        while(tempNumber) {
            length++;
            tempNumber /= 10;
        }
        std::cout << length << std::endl;
        
        str = new char[length];
        
        tempNumber = number;
        length--;
        while(tempNumber) {
            int digit = tempNumber % 10;
            std::cout << digit << std::endl;
            tempNumber /= 10;
            str[length--] = digit;
        }
        return str;
    }
}