/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C10Excercises.h
 * Author: default
 *
 * Created on March 11, 2024, 11:02 AM
 */

#ifndef C10EXCERCISES_H
#define C10EXCERCISES_H
#include <map>
#include <vector>

namespace C10 {
    extern void nameValueSeqenceEx02();
    
    extern int myStrLen(const char* arr);
    extern void myStrCpy(const char* from, char* to);
    extern int myStrCmp(const char* left, const char* right);
    extern char* myConCat(const char* first, const char* second);
    extern void myReverse(char arr[]);
    
    extern void testEx07();
    extern void testCmpEx07();
    extern void printMedianValue(std::map<std::string, std::vector<std::pair<int, double>>>&);
    
    extern void testMyConCatE09();
    extern void testReverseE10();
    extern void reverseCArray();
    
}

#endif /* C10EXCERCISES_H */

