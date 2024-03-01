/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "BasicTimer.h"

namespace Time {
    SimpleTimer::SimpleTimer() 
        : startPoint{},
          endPoint{}, 
          diffTime{} {
        
    }
    SimpleTimer::~SimpleTimer() {
        
    }
    
    void SimpleTimer::startTimer() {
        startPoint = std::chrono::high_resolution_clock::now();
    }
    void SimpleTimer::stopTimer() {
        endPoint = std::chrono::high_resolution_clock::now();
    }
    void SimpleTimer::timeElapsedNanoseconds() {
        std::cout << "Time Consumed in nanoseconds: " 
                << std::chrono::duration_cast<std::chrono::nanoseconds>(endPoint - startPoint).count() 
                << " nanoseconds" << std::endl;
    }
    void SimpleTimer::timeElapsedMicroseconds() {
        std::cout << "Time Consumed in microseconds: " 
                << std::chrono::duration_cast<std::chrono::microseconds>(endPoint - startPoint).count() 
                << " microseconds" << std::endl;
    }
    void SimpleTimer::timeElapsedMilliseconds() {
        std::cout << "Time Consumed in milliseconds: " 
                << std::chrono::duration_cast<std::chrono::milliseconds>(endPoint - startPoint).count() 
                << " milliseconds" << std::endl;
    }
    void SimpleTimer::timeElapsedSeconds() {
        std::cout << "Time Consumed in seconds: " 
                << std::chrono::duration_cast<std::chrono::seconds>(endPoint - startPoint).count() 
                << " seconds" << std::endl;
    }
    void SimpleTimer::timeElapsedMinutes() {
        std::cout << "Time Consumed in minutes: " 
                << std::chrono::duration_cast<std::chrono::minutes>(endPoint - startPoint).count() 
                << " minutes" << std::endl;
    }
    void SimpleTimer::timeElapsedHours() {
        std::cout << "Time Consumed in hours: " 
                << std::chrono::duration_cast<std::chrono::minutes>(endPoint - startPoint).count() 
                << " hours" << std::endl;
    }
}