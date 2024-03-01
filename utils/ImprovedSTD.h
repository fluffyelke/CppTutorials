/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   ImprovedSTD.h
 * Author: default
 *
 * Created on February 28, 2024, 3:56 PM
 */

#ifndef IMPROVEDSTD_H
#define IMPROVEDSTD_H

#include <algorithm>
#include <numeric>


namespace MySTD {
    template<typename T> 
    void sort(T& container) {
        std::sort(container.begin(), container.end());
    }
    
    template<typename T, typename Predicate>
    void sort(T& container, Predicate pred) {
        std::sort(container.begin(), container.end(), pred);
    }
    
    template<typename T>
    void myAccumulate(T& container, double initValue) {
        return std::accumulate(container.begin(), container.end(), initValue);
    }
}

#endif /* IMPROVEDSTD_H */

