/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   UsefulMacros.h
 * Author: default
 *
 * Created on April 15, 2024, 3:27 PM
 */

#ifndef USEFULMACROS_H
#define USEFULMACROS_H

#include <iostream>

    #define ENDLESS_LOOP while(true)
    #define CASE break; case

    //concatenating 2 strings using macros
    #define CONCAT(left, right) left##right

    #define PRINT(x) std::cout << #x << " : " << x << std::endl

    #define PRINT_LOG() std::cout << __func__ << "() in file " << __FILE__ << " on line " << __LINE__ << std::endl

    #define ERROR(err) std::cout << __func__ << "() in file " << __FILE__ << " on line " << __LINE__ << " error msg: " << #err << std::endl;

namespace Macros {


    extern void printMacros();
    
}

#endif /* USEFULMACROS_H */

