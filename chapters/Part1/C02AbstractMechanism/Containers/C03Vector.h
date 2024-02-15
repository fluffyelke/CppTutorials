/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   C03Vector.h
 * Author: default
 *
 * Created on February 15, 2024, 1:28 PM
 */

#ifndef C03VECTOR_H
#define C03VECTOR_H

#include <initializer_list>

#include "IContainer.h"

namespace C03 {
    class C03Vector {
    public:
        //constructor
        C03Vector();
        C03Vector(int lSize);
        C03Vector(std::initializer_list<double>& lList);
        //destructor
        virtual ~C03Vector();
        
        double& operator [] (int lIndex);
        int getSize() const;
        
        void pushBack(double elem);
    private:
        double *data;
        int size;
    };
    
    class C03VectorContainer : public IContainer {
        C03Vector myVec;
    public:
        C03VectorContainer(std::initializer_list<double>& lList);
        C03VectorContainer(int lSize);
        ~C03VectorContainer();
        
        double& operator [] (int lIndex);
        int getSize() const;
    };
}

#endif /* C03VECTOR_H */

