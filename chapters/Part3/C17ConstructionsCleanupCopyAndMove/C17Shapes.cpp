/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "C17Shapes.h"


namespace C17 {
    Shape::Shape() {
        std::cout << "Shape()" << std::endl;
    }
    Shape::~Shape() {
        std::cout << "~Shape()" << std::endl;
    }
    void Shape::draw() {
        std::cout << "Shape::draw() called" << std::endl;
    }
    
    Circle::Circle() {
        std::cout << "Circle()" << std::endl;
    }
    Circle::~Circle() {
        std::cout << "~Circle()" << std::endl;
    }
    void Circle::draw() {
        std::cout << "Circle::draw() called" << std::endl;
    }
}