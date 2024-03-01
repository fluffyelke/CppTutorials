/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   BasicTimer.h
 * Author: default
 *
 * Created on March 1, 2024, 9:23 AM
 */

#ifndef BASICTIMER_H
#define BASICTIMER_H

#include <chrono>

namespace Time {

class SimpleTimer {
private:
    SimpleTimer();
    ~SimpleTimer();
    
    std::chrono::time_point<std::chrono::high_resolution_clock> startPoint;
    std::chrono::time_point<std::chrono::high_resolution_clock> endPoint;
    std::chrono::duration<double> diffTime;
public:
    static SimpleTimer& getInstance() {
        static SimpleTimer timer;
        return timer;
    }
    void startTimer();
    void stopTimer();
    void timeElapsedNanoseconds();
    void timeElapsedMicroseconds();
    void timeElapsedMilliseconds();
    void timeElapsedSeconds();
    void timeElapsedMinutes();
    void timeElapsedHours();
};

}

#endif /* BASICTIMER_H */

