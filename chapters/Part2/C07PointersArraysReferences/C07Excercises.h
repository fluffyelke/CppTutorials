/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C07Excercises.h
 * Author: default
 *
 * Created on March 5, 2024, 1:15 PM
 */

#ifndef C07EXCERCISES_H
#define C07EXCERCISES_H

namespace C07 {
    extern void ex01();
    extern void ex03();
    extern void ex04();
    template<typename T> 
    int distance(const T* first, const T* second) {
        if(first == second) {
            return 0;
        }
        return second - first;
    }
    extern void swap(int* left, int* right);
    extern void swap(int& left, int& right);
    extern void testSwap();
    extern void testLengthEx08();
}

#endif /* C07EXCERCISES_H */

