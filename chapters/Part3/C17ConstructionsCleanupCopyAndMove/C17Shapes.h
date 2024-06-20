/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C17Shapes.h
 * Author: default
 *
 * Created on May 13, 2024, 10:50 AM
 */

#ifndef C17SHAPES_H
#define C17SHAPES_H

namespace C17 {
    
    class Shape {
    public:
        Shape();
        virtual void draw() = 0;
        //When we have virtual functions in the class, destructor must be virtual,
        //because base class pointer will be used to derived class,
        // Shape* obj = new Circle();
        // when out of scope obj->~Circle(); will be called.
        virtual ~Shape();
    };
    
    class Circle : public Shape {
    public:
        Circle();
        void draw() override;
        ~Circle();  //overried ~Shape() destructor.
    };
}

#endif /* C17SHAPES_H */

