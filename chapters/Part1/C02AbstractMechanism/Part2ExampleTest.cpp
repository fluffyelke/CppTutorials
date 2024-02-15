/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "Part2ExampleTest.h"
#include "Containers/C03Vector.h"
#include "Containers/ContainersExamples.h"
#include <iostream>

namespace Part2 {
    void testC03Vector1() {
        C03::C03Vector myVec;
        myVec = C03::readFrom(std::cin);
    }
    void testContainer() {
        std::initializer_list<double> myList {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
        C03::C03VectorContainer myVec{myList};
        C03::useContainer(myVec);
    }
}