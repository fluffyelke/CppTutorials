/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
#include "../../../utils/UsefulFunctions.h"
#include "../../../utils/RNGGenerator.h"
#include "../../../utils/BasicTimer.h"
#include "C11Excercises.h"

namespace C11 {
    void ex01() {
        int arr[] = {
           -2, 42, 0, 12, 54, 0, 1, -6, 0, 100, 4, 6, 0, 15  
        };
        for(int i = 0; i < sizeof(arr) / sizeof(int); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
        std::vector<int> resVec;
        int* arrPtr = &arr[0];
        
        for(int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
            if(*arrPtr != 0) {
                resVec.emplace_back(*arrPtr);
            }
            arrPtr++;
        }
        std::copy(resVec.begin(), resVec.end(), std::ostream_iterator<int>(std::cout, " "));
    }
    
    void ex02MemoryBadAllocThrow() {
        
        std::vector<int*> myVec;
        long long int bytes = 0;
        try {
            while(true) {
                int intArr[100000];
                bytes += sizeof(intArr);
                myVec.push_back(intArr);
            }
        }
        catch(std::bad_alloc& e) {
            std::cout << e.what() << std::endl;
            std::cout << "TotalBytes: " << bytes << std::endl;
        }
    }
    
    void ex03Accumulate() {
        std::vector<int> myVec;
        Time::SimpleTimer::getInstance().startTimer("Create RNG Numbers");
        for(int i = 0; i < 10000000; ++i){
            int value = RNG::RNGGenerator::getInstance().getInt(1, 1000);
            myVec.emplace_back(value);
        }
        Time::SimpleTimer::getInstance().stopTimer("Stop Create RNG Numbers");
        Time::SimpleTimer::getInstance().timeElapsedMicroseconds();
//        Utils::printContainer(myVec, "Initial Container: ");
        Utils::printLog("Simple For Loop Calculate: ");
        
        int sum = 0;
        Time::SimpleTimer::getInstance().startTimer("Start Simple Loop Accumulate");
        for(int i = 0; i < myVec.size(); ++i) {
            sum += myVec.at(i);
        }
        Time::SimpleTimer::getInstance().stopTimer("Stop Simple Loop Accumulate");
        Time::SimpleTimer::getInstance().timeElapsedMicroseconds();
        std::cout << "Total Sum: " << sum << std::endl;
        
        sum = 0;
        Time::SimpleTimer::getInstance().startTimer("Start For Each Copy");
        for(auto elem : myVec) {
            sum += elem;
        }
        Time::SimpleTimer::getInstance().stopTimer("Stop For Each Copy");
        Time::SimpleTimer::getInstance().timeElapsedMicroseconds();
        std::cout << "Total Sum: " << sum << std::endl;
        
        sum = 0;
        Time::SimpleTimer::getInstance().startTimer("Start For Each Reference");
        for(auto& elem : myVec) {
            sum += elem;
        }
        Time::SimpleTimer::getInstance().stopTimer("Stop For Each Reference");
        Time::SimpleTimer::getInstance().timeElapsedMicroseconds();
        std::cout << "Total Sum: " << sum << std::endl;
        
        sum = 0;
        Time::SimpleTimer::getInstance().startTimer("Start For Each Algorithm using vector begin()");
        std::for_each(myVec.begin(), myVec.end(), [&sum](int elem) {
            sum += elem;
        });
        Time::SimpleTimer::getInstance().stopTimer("Stop For Each Algorithm using vector begin()");
        Time::SimpleTimer::getInstance().timeElapsedMicroseconds();
        std::cout << "Total Sum: " << sum << std::endl;
        
        sum = 0;
        Time::SimpleTimer::getInstance().startTimer("Start For Each Algorithm using  global begin()");
        std::for_each(std::begin(myVec), std::end(myVec), [&sum](int elem) {
            sum += elem;
        });
        Time::SimpleTimer::getInstance().stopTimer("Stop For Each Algorithm using global begin()");
        Time::SimpleTimer::getInstance().timeElapsedMicroseconds();
        std::cout << "Total Sum: " << sum << std::endl;
    }
}