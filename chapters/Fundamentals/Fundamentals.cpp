/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include <iomanip>

#include "Fundamentals.h"

#define COUT(x) std::cout << std::left << std::setw(35) << #x << " size in bytes: " \
                          << std::right << std::setw(5) << x << std::endl

namespace Fundamentals {
    void printTypesSize() {
        COUT(sizeof(char));
        COUT(sizeof(unsigned char));
        COUT(sizeof(signed char));
        
        COUT(sizeof(short));
        COUT(sizeof(unsigned short));
        COUT(sizeof(signed short));
        
        COUT(sizeof(short int));
        COUT(sizeof(unsigned short int));
        COUT(sizeof(signed short int));
        
        COUT(sizeof(int));
        COUT(sizeof(unsigned int));
        COUT(sizeof(signed int));
        
        COUT(sizeof(long int));
        COUT(sizeof(unsigned long int));
        COUT(sizeof(signed long int));
        
        COUT(sizeof(long));
        COUT(sizeof(unsigned long));
        COUT(sizeof(signed long));
        
        COUT(sizeof(long long));
        COUT(sizeof(unsigned long long));
        COUT(sizeof(signed long long));
        
        COUT(sizeof(long long int));
        COUT(sizeof(unsigned long long int));
        COUT(sizeof(signed long long int));
        
        COUT(sizeof(float));
        
        COUT(sizeof(double));

    }
}