/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   VectorOverride.h
 * Author: default
 *
 * Created on February 28, 2024, 1:17 PM
 */

#ifndef VECTOROVERRIDE_H
#define VECTOROVERRIDE_H

#include <vector>

template<typename T>
class VectorOverride : public std::vector<T> {
    public:
        using std::vector<T>::vector;
        
        T& operator [] (int lIndx) {        //range check
            return vector<T>::at(lIndx);
        }
        
        const T& operator [] (int lIndx) const { //range check const objects
            return vector<T>::at(lIndx);
        }
        
};

#endif /* VECTOROVERRIDE_H */

