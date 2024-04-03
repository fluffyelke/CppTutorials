/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C09Excercises.h
 * Author: default
 *
 * Created on March 7, 2024, 3:14 PM
 */

#ifndef C09EXCERCISES_H
#define C09EXCERCISES_H

namespace C09 {
    enum class NumericSystem {
        decimal,
        octal,
        hex,
    };
    extern int octCharToInt(char c);
    extern int decimalCharToInt(char c);
    extern int hexCharToInt(char c);
    extern int myAtoi(const char* myStr);
    extern int improvedAtoi(const char* myStr, NumericSystem type);
    extern void testEx04();
    extern void improvedAtoiEx04();
    
    extern char* myIntToStr(int number, char str[]);
}

#endif /* C09EXCERCISES_H */

