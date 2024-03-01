/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <condition_variable>
#include <iostream>
#include <thread>
#include <chrono>
#include <future>
#include <algorithm>
#include <vector>
#include <deque>
#include "C05ConcurencyExamples.h"
//
#include "../../../utils/ImprovedSTD.h"
#include "../../../utils/UsefulFunctions.h"
#include "../../../utils/BasicTimer.h"
#include "../../../utils/RNGGenerator.h"

namespace Concurency {
    std::mutex myMutex;
    
    void printHello() {
        std::unique_lock<std::mutex> lockThread{myMutex};
        std::cout << "Hello ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::duration<int>(1));
    }
    void printWorld() {
        std::unique_lock<std::mutex> lockThread{myMutex};
        std::cout << "World ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::duration<int>(2));
    }
    void runProgramEx01() {
        for(int i = 0; i < 5; ++i) {
            programLogic();
            std::cout << std::endl;
        }
    }
    void programLogic() {
        std::thread one{printHello};
        std::thread two{printWorld};
        one.join();
        two.join();
    }
    void someFunc() {
        std::cout << "SomeFuncPrint" << std::endl;
    }
    struct FuncObj {
        void operator () () {
            std::cout << "Function Object print" << std::endl;
        }
    };
    void user() {
        std::thread threadOne{someFunc};
        std::thread threadTwo{FuncObj()};
        threadOne.join();       //wait for threadOne
        threadTwo.join();       //wait for threadTwo
    }
    double myAcc(double* start, double* end, double initVal) {
        return std::accumulate(start, end, initVal);
    }
    double accumulateWithThreads(std::vector<double>& myVec) {
        using TaskType = double(double*, double*, double);  //type of the task
            
        std::packaged_task<TaskType> firstPart{myAcc};      //package the task
        std::packaged_task<TaskType> secondPart{myAcc};
        
        std::future<double> futureResOne{firstPart.get_future()};       //get hold of firstPart future
        std::future<double> futureResTwo{secondPart.get_future()};      //get hold of secondPart future
        
        double* first = &myVec[0];
        
        std::thread one{std::move(firstPart), first, first + myVec.size() / 2, 0};                  //start thread for firstPart
        std::thread two{std::move(secondPart), first + myVec.size() / 2, first + myVec.size(), 0};  //start thread for secondPart
        one.join();
        two.join();
        double sumFirst = futureResOne.get();
        double sumSecond = futureResTwo.get();
        std::cout << sumFirst << " " << sumSecond << std::endl;
        return sumFirst + sumSecond;    //can use 'return futuresResOne.get() + futuresResTwo.get();'
    }
    void testAccumulateWithThreads() {
        std::vector<double> myVec;
        for(int i = 0; i < 100; ++i) {
            myVec.emplace_back(i);
        }
        double sum = 0;
        sum = accumulateWithThreads(myVec);
        std::cout << "Total Sum: " << sum << std::endl;
    }
    
    double accumulateWithAsync(std::vector<double>& myVec) {
//        if(myVec.size() < 10000) {
//            return std::accumulate(myVec.begin(), myVec.end(), 0.0);
//        }
        
        double* first = &myVec[0];
        size_t vecSize = myVec.size();
        
        auto firstPart = std::async(myAcc, first, first + vecSize / 4, 0.0);
        auto secondPart = std::async(myAcc, first + static_cast<int>(vecSize * 0.25), first + static_cast<int>(vecSize * 0.5), 0.0);
        auto thirdPart = std::async(myAcc, first + static_cast<int>(vecSize * 0.5), first + static_cast<int>(vecSize * 0.75), 0.0);
        auto fourthPart = std::async(myAcc, first + static_cast<int>(vecSize * 0.75), first + vecSize, 0.0);
        double sum = 0;
        double tempSum = 0;
        tempSum = firstPart.get();
        sum += tempSum;
        std::cout << "First part: " << tempSum << std::endl;
        tempSum = secondPart.get();
        sum += tempSum;
        std::cout << "Second part: " << tempSum << std::endl;
        tempSum = thirdPart.get();
        sum += tempSum;
        std::cout << "Third part: " << tempSum << std::endl;
        tempSum = fourthPart.get();
        sum += tempSum;
        std::cout << "Fourth part: " << tempSum << std::endl;
        return sum;
    }
    void testAsyncAccumulate() {
        std::vector<double> myVec;
        for(int i = 0; i < 10000; i++) {
            myVec.emplace_back(1);      //10
        }
        for(int i = 0; i < 10000; i++) {
            myVec.emplace_back(2);      //20
        }
        for(int i = 0; i < 10000; i++) {
            myVec.emplace_back(3);      //30    
        }
        for(int i = 0; i < 10000; i++) {
            myVec.emplace_back(4);      //40
        }
        double sum = accumulateWithAsync(myVec);
        std::cout << "Sum: " << sum << std::endl;
    }
    
    void sumLotsOfNumbers() {
        
        Time::SimpleTimer::getInstance().startTimer();
        std::cout << "TimerExample" << std::endl;
        std::vector<double> myVec;
        for(int i = 0; i < 100; i++) {
            myVec.emplace_back(i);
        }
        double sum = 0;
        for(int i = 0; i < myVec.size(); ++i) {
            sum += myVec.at(i);
        }
        std::cout << "Total Sum: " << sum << std::endl;
        Utils::printContainer(myVec, "myVec: ");
        Time::SimpleTimer::getInstance().stopTimer();
        Time::SimpleTimer::getInstance().timeElapsedNanoseconds();
    }
    
    void testRNG() {
        auto one = RNG::RNGGenerator::getInstance().getDouble(0, 100);
        std::vector<double> myVec;
        for(int i = 0; i < 100; i++) {
            myVec.emplace_back(RNG::RNGGenerator::getInstance().getDouble(0, 100));
        }
        Utils::printContainer(myVec, "After Rand Double: ");
    }
}