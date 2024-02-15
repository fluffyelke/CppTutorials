/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   C03Vector.cpp
 * Author: default
 * 
 * Created on February 15, 2024, 1:28 PM
 */

#include <algorithm>
#include <cstddef>
#include "C03Vector.h"

namespace C03 {
    
    C03Vector::C03Vector() 
        : data{new double[10]},
          size{10} {

            for (int i = 0; i < size; ++i) {
                data[i] = 0;
            }

    }
          
    C03Vector::C03Vector(std::initializer_list<double>& lList)  
        : data{ new double[lList.size()] },
          size{ static_cast<int>(lList.size()) }{
            std::copy(lList.begin(), lList.end(), data);
    }
    
    C03Vector::C03Vector(int lSize) 
        : data{new double[lSize]},
          size{lSize} {

            for (int i = 0; i < size; ++i) {
                data[i] = 0;
            }

    }

    C03Vector::~C03Vector() {
        delete [] data;
    }
    
    double& C03Vector::operator [] (int lIndex) {
        return data[lIndex];
    }
    
    int C03Vector::getSize() const {
        return size;
    }
    
    void C03Vector::pushBack(double lElem) {
        static int index = 0;
        data[index++] = lElem;
    }
    
    C03VectorContainer::C03VectorContainer(int lSize) 
        : myVec{lSize} {
        
    }
        
    C03VectorContainer::C03VectorContainer(std::initializer_list<double>& lList)  
        : myVec{lList} {

    }
    C03VectorContainer::~C03VectorContainer() {
        
    }

    double& C03VectorContainer::operator [] (int lIndex) {
        return myVec[lIndex];
    }
    int C03VectorContainer::getSize() const  {
        return myVec.getSize();
    }
}
