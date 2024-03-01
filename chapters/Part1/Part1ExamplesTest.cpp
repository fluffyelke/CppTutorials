/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "Part1ExamplesTest.h"
#include "C02TheBasics/C02Examples.h"
#include "C04Containers/C04Excercises.h"
#include "C05ConcurencyAndUtilities/C05ConcurencyExamples.h"

namespace Part01 {
    void squareTest() {
        std::cout << C02::square(10) << std::endl;
        std::cout << C02::square(1.21) << std::endl;
    }
    void testPrintArr() {
        C02::printArr();
        C02::referToArrElem();
    }
    void countLettersInArr() {
        const char myArr[] = "what the hell is that";
        std::cout << "There are total: " << C02::countChars(myArr, 'a') << ", letters 'a': in sentence: " << std::string(myArr) << std::endl;
    }
    
    void simpleC02VectorUse() {
        double mySum = 0;
        mySum = C02::readAndSumC02Vector(5);
        std::cout << "Total Sum: " << mySum << std::endl;
    }
    
    void enumExample() {
        C02::enumTest();
    }
    
    void exceptionExample() {
        C02::testLengthError();
    }
    
    void staticAssertTest() {
        C02::staticAssertExample();
    }
    
    void testEx05nameAndAge() {
        C04::printNameAndAgeEx05();
    }
    void testEx06NameAndAgeClass() {
        C04::PersonC04 obj;
        std::cin >> obj.name >> obj.age;
        std::cout << std::endl;
        std::cout << obj;
        std::cout << std::endl;
    }
    void testEx07SortVector() {
        C04::sortAVectorE07();
    }
    void testEx08SortStringVector() {
        C04::sortStringVectorE08();
    }
    void testWritingIntegers() {
        C04::writeIntegersE09();
    }
    void testReadingIntegers() {
        C04::readIntegersE10();
    }
    
    void testExamplesConcurency() {
//        Concurency::user();
//        Concurency::testAccumulateWithThreads();
//        Concurency::testAsyncAccumulate();
//        Concurency::sumLotsOfNumbers();
        Concurency::testRNG();
    }
    void testEx01Concurency() {
        Concurency::runProgramEx01();
        
    }
}