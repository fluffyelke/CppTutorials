/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: default
 *
 * Created on February 7, 2024, 12:29 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <unordered_map>

#include "chapters/Part1/Part1ExamplesTest.h"
#include "chapters/Fundamentals/Fundamentals.h"
//#include "chapters/Part1/C02TheBasics/C02Examples.h"
//#include "chapters/Part1/C02TheBasics/C02SomeTest.h"

void mapExample() {
    std::unordered_map<std::string, int> myMap = {
        {"one", 1},
        {"two", 2},
    };
}

void FundamentalsTest() {
    Fundamentals::printTypesSize();
}
void part01Basics() {
    Part01::squareTest();
}
int main(int argc, char** argv) {

    part01Basics();
    FundamentalsTest();
    
    return 0;
}

