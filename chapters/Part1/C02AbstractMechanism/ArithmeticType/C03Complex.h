/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   C03Complex.h
 * Author: default
 *
 * Created on February 13, 2024, 12:03 PM
 */

#ifndef C03COMPLEX_H
#define C03COMPLEX_H


namespace C03 {
    
class C03Complex {
public:
    C03Complex(const double lReal, const double lImag);
    C03Complex(const double lReal);
    C03Complex();
    //C03Complex(const C03Complex& orig);
    //virtual ~C03Complex();
    
    double realPart() const;
    void setRealPart(const double lReal);
    
    double imagPart() const;
    void setImagPart(const double lImag);
    
    C03Complex& operator += (C03Complex obj);
    C03Complex& operator -= (C03Complex obj);
    
    C03Complex& operator *= (C03Complex obj);
    C03Complex& operator /= (C03Complex obj);
private:
    double realNum;
    double imagNum;
};

//Useful methods that required not direct access of the class
C03Complex operator + (C03Complex first, C03Complex second);
C03Complex operator - (C03Complex first, C03Complex second);
C03Complex operator - (C03Complex first);  //unary minus
C03Complex operator * (C03Complex first, C03Complex second);
C03Complex operator / (C03Complex first, C03Complex second);

bool operator == (C03Complex first, C03Complex second);
bool operator != (C03Complex first, C03Complex second);

}
#endif /* C03COMPLEX_H */

