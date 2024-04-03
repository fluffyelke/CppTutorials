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
#include "chapters/Part2/C07PointersArraysReferences/C07Examples.h"
#include "chapters/Part2/C07PointersArraysReferences/C07Excercises.h"
#include "chapters/Part2/C08StructuresUnionsEnumerations/C08Examples.h"
#include "chapters/Part2/C08StructuresUnionsEnumerations/C08Excercises.h"
#include "chapters/Part2/C09Statements/C09Excercises.h"
#include "chapters/Part2/C10Expressions/C10Examples.h"
#include "chapters/Part2/C10Expressions/C10Excercises.h"
#include "chapters/Part2/C11SelectOperations/C11Examples.h"
#include "chapters/Part2/C11SelectOperations/C11Excercises.h"
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

    //Part02
    //Chapter06
    void examplesC06TypesAndDeclarations() {
        
        excercisesC06TypesAndDeclarations();
    }
    void excercisesC06TypesAndDeclarations() {
        
    }
    
    void examplesC07() {
//        C07::arraySubscriptionExample();
        excercisesC07();
    }
    void excercisesC07() {
//        C07::ex04();
        C07::testLengthEx08();
    }
    
    void examplesC08() {
        C08::testAddress1();
        excercisesC08();
    }
    void excercisesC08() {
        C08::ex01();
//        C08::testDateEx05();
        C08::testSeasonsEx06();
    }
    
    void examplesC09Statements() {
        
        excercisesC09Statements();
    }
    void excercisesC09Statements() {
//        C09::testEx04();
        C09::improvedAtoiEx04();
    }
    
    //Expressions
    void examplesC10Expressions() {
//        C10::decltypeTest();
//        C10::calculatorProgram();
        excercisesC10Expressions();
    }
    void excercisesC10Expressions() {
//        C10::nameValueSeqenceEx02();
//        C10::testEx07();
//        C10::testCmpEx07();
//        C10::testMyConCatE09();
//        C10::testReverseE10();
//        C10::reverseCArray();
    }
    
    void examplesC11SelectOperations() {
        
//        C11::getMiddleOfANumber();
//        C11::testModulo();
        
        excercisesC11SelectOperations();
    }
    void excercisesC11SelectOperations() {
//        C11::ex01();
//        C11::ex02MemoryBadAllocThrow();
        C11::ex03Accumulate();
    }
    
}
