/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C08Excercises.h
 * Author: default
 *
 * Created on March 5, 2024, 4:07 PM
 */

#ifndef C08EXCERCISES_H
#define C08EXCERCISES_H

#include <istream>
#include <ostream>

namespace C08 {
    extern void ex01();
    extern void ex02();
    extern void ex04();
    
    struct Date {
        const char* month;
        int day;
        int year;
        
        friend std::ostream& operator << (std::ostream& os, const Date& obj);
        friend std::istream& operator >> (std::istream& is, Date& obj);
    };
    
    extern void testDateEx05();
    
    enum class Seasons {
        spring,
        summer,
        autumn, 
        winter 
    };
    std::ostream& operator << (std::ostream& os, const Seasons& obj);
    std::istream& operator >> (std::istream& is, Seasons& obj);
    Seasons& operator ++ (Seasons& obj);    //pre
    Seasons operator ++ (Seasons& obj, int); //post
    Seasons& operator -- (Seasons& obj);    //pre
    Seasons operator -- (Seasons& obj, int);   //post
    
    extern void testSeasonsEx06();
}

#endif /* C08EXCERCISES_H */

