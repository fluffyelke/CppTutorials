/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   C03Complex.cpp
 * Author: default
 * 
 * Created on February 13, 2024, 12:03 PM
 */

#include "C03Complex.h"

namespace C03 {
    C03Complex::C03Complex() 
        : realNum{0},
          imagNum{0} {
        
    }
    C03Complex::C03Complex(const double lReal) 
        : realNum{lReal},
          imagNum{0} {
        
    }
    C03Complex::C03Complex(const double lReal, const double lImag) 
        : realNum{lReal},
          imagNum{lImag} {
        
    }
    double C03Complex::realPart() const {
        return realNum;
    }
    double C03Complex::imagPart() const {
        return imagNum;
    }
    
    void C03Complex::setRealPart(const double lReal) {
        realNum = lReal;
    }
    
    void C03Complex::setImagPart(const double lImag) {
        imagNum = lImag;
    }
    
    C03Complex& C03Complex::operator += (C03Complex obj) {
        realNum += obj.realNum;
        imagNum += obj.imagNum;
        return *this;
    }
    C03Complex& C03Complex::operator -= (C03Complex obj) {
        realNum -= obj.realNum;
        imagNum -= obj.imagNum;
        return *this;
    }
    
    C03Complex& C03Complex::operator *= (C03Complex obj) {
        realNum *= obj.realNum;
        imagNum *= obj.imagNum;
        return *this;
    }
    C03Complex& C03Complex::operator /= (C03Complex obj) {
        realNum /= obj.realNum;
        imagNum /= obj.imagNum;
        return *this;
    }
    
    C03Complex operator + (C03Complex first, C03Complex second) {
        return first + second;
    }
    C03Complex operator - (C03Complex first, C03Complex second) {
        return first - second;
    }
    C03Complex operator - (C03Complex first) {
        return { -first.realPart(), -first.imagPart() };
    }
    C03Complex operator * (C03Complex first, C03Complex second) {
        return first *= second;
    }
    C03Complex operator / (C03Complex first, C03Complex second) {
        return first /= second;
    }

    bool operator == (C03Complex first, C03Complex second) {
        return (first.realPart() == second.realPart()) && (first.imagPart() == second.imagPart());
    }
    bool operator != (C03Complex first, C03Complex second) {
        return (first != second);
    }

}

