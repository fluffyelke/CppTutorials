/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C17Examples.h
 * Author: default
 *
 * Created on May 8, 2024, 10:09 AM
 */

#ifndef C17EXAMPLES_H
#define C17EXAMPLES_H

#include <iostream>


namespace C17 {
    
    class X {
        X();                        //default constructor
        explicit X(int);            //user defined constructor, by default declare single argument constructor explicit
        X(int, int);                //user defined constructor.
        
        X(const X&);                //copy constructor
        X(X&&);                     //move constructor
                
        X operator = (const X&);    //copy assignment operator
        X operator = (X&&);         //move assignment operator
        
    };
    
    //Example for explicitly use of destructor, when the objects must be created on the heap
    //When destructor is private, we cant create object on the stack, only in heap.
    class DynamicClass {
    public:
        //Constructor
        DynamicClass() {
            std::cout << "Create DynamicClass() called." << std::endl;
        }
        void destroy() {
            this->~DynamicClass();
        }
    private:
        ~DynamicClass() {
            std::cout << "Destructor ~DynamicClass() object called." << std::endl;
        }
    };
    extern void simpleExample();
    extern void dynamicClassExample();
    extern void shapeExample();
    
}

#endif /* C17EXAMPLES_H */

