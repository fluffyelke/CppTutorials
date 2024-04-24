/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C11Excercises.h
 * Author: default
 *
 * Created on March 13, 2024, 1:56 PM
 */

#ifndef C11EXCERCISES_H
#define C11EXCERCISES_H

#include <vector>
#include <functional>


namespace C11 {
    extern void ex01();
    extern void ex02MemoryBadAllocThrow();
    
    extern void ex03Accumulate();
    
    extern void ex04Test();
    extern void ex04Apply(std::vector<int*> myVec, std::function<void(int)> myFunc);
}

#endif /* C11EXCERCISES_H */

