/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C05ConcurencyExamples.h
 * Author: default
 *
 * Created on February 29, 2024, 12:03 PM
 */

#ifndef C05CONCURENCYEXAMPLES_H
#define C05CONCURENCYEXAMPLES_H
#include <vector>

namespace Concurency {
    extern void printHello();
    extern void printWorld();
    extern void programLogic();
    extern void runProgramEx01();
    
    extern void someFunc();
    extern void user();
    
    extern double accumulateWithThreads(std::vector<double>& myVec);
    extern void testAccumulateWithThreads();
    extern double accumulateWithAsync(std::vector<double>& myVec);
    extern void testAsyncAccumulate();
    extern void sumLotsOfNumbers();
    extern void testRNG();
}

#endif /* C05CONCURENCYEXAMPLES_H */

