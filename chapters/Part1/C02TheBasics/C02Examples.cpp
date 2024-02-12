/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   C02Examples.cpp
 * Author: default
 * 
 * Created on February 7, 2024, 1:49 PM
 */

#include "C02Examples.h"
#include <iostream>
namespace C02 {
    void simpleExample() {
        std::cout << "PSsttt" << std::endl;
    }
    double square(double d) {
        return d * d;
    }
    bool accept() {
        std::cout << "Do you want to proceed? ";
        char answer = 0;
        std::cin >> answer;
        
        if(answer == 'y' || answer == 'Y') {
            return true;
        }
        return false;
    }
}

