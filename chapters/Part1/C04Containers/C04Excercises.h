/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C04Excercises.h
 * Author: default
 *
 * Created on February 28, 2024, 4:01 PM
 */

#ifndef C04EXCERCISES_H
#define C04EXCERCISES_H
#include <string>

namespace C04 {
    extern void printNameAndAgeEx05();
    
    class PersonC04 {
    public:
        std::string name;
        int age;
        
        friend std::ostream& operator << (std::ostream& os, const PersonC04& obj);
        friend std::istream& operator >> (std::istream& is, PersonC04& obj);
    };
    
    extern void sortAVectorE07();
    extern void sortStringVectorE08();
    extern void writeIntegersE09();
    extern void readIntegersE10();
}
#endif /* C04EXCERCISES_H */

