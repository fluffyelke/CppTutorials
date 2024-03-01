/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include "AllExamples.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>

#include "chapters/Part1/Part1ExamplesTest.h"
#include "chapters/Fundamentals/Fundamentals.h"
#include "chapters/Part1/C02AbstractMechanism/Part2ExampleTest.h"
#include "utils/Comparator.h"
//#include "utils/UsefulFunctions.h"
//#include "chapters/Part1/C02TheBasics/C02Examples.h"
//#include "chapters/Part1/C02TheBasics/C02SomeTest.h"

namespace Examples {

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
        Part01::testPrintArr();
        Part01::countLettersInArr();
    //    Part01::simpleC02VectorUse();
        Part01::enumExample();
        Part01::exceptionExample();
        Part01::staticAssertTest();
    }

    void part02Abstractions() {
    //    Part2::testC03Vector1();
        Part2::testContainer();
    }

    void part01Containers() {
    //    Part01::testEx05nameAndAge();
    //    Part01::testEx06NameAndAgeClass();
    //    Part01::testEx07SortVector();
    //    Part01::testEx08SortStringVector();
    //    Part01::testWritingIntegers();
        Part01::testReadingIntegers();
    }
    void testComparator() {
        int i = 55;
        Comparator<int> myInt{35};
        bool isLess = myInt(i);  //compare i < myInt
        std::cout << std::boolalpha << isLess << std::endl;
    }
    void testUsefulFunctions() {
        //Utils::someFuncC02(22.5, 100, 1, "Print me", "Recursively");
        std::vector<int> myVec(20, true);
        for(auto& elem : myVec) {
            std::cout << elem << " ";
        }
    }
    
    void testConcurencyAndUtilities() {
//        Part01::testEx01Concurency();
        Part01::testExamplesConcurency();
        testConcurencyExercises();
    }
    void testConcurencyExercises() {
        
    }

}
