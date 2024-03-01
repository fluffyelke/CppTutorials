/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   RNGGenerator.cpp
 * Author: default
 * 
 * Created on March 1, 2024, 1:40 PM
 */

#include <chrono>

#include "RNGGenerator.h"
namespace RNG {
    
    RNGGenerator::RNGGenerator() 
        : randEngine{} {
    }
    RNGGenerator::~RNGGenerator() {
        
    }
    long long int RNGGenerator::getInt(long long int from, long long int to) {
        std::random_device randDevice;
        unsigned int device = randDevice();
        randEngine.seed(device);
        std::uniform_int_distribution<long long int> intDistribution{from, to};//std::chrono::high_resolution_clock::now()};
        return intDistribution(randEngine);
    }
    double RNGGenerator::getDouble(double from, double to) {
        std::random_device randDevice;
        unsigned int device = randDevice();
        randEngine.seed(device);
        std::uniform_real_distribution<double> doubleDistribution{from, to};//std::chrono::high_resolution_clock::now()};
        return doubleDistribution(randEngine);
    }
}
