/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   RNGGenerator.h
 * Author: default
 *
 * Created on March 1, 2024, 1:40 PM
 */

#ifndef RNGGENERATOR_H
#define RNGGENERATOR_H

#include <random>


namespace RNG {
    class RNGGenerator {
    public:
        static RNGGenerator& getInstance() {
            static RNGGenerator rngGenerator;
            return rngGenerator;
        }
        double getDouble(double from, double to);
        long long int getInt(long long int from, long long int to);
    private:
        RNGGenerator();
        virtual ~RNGGenerator();
        
        std::default_random_engine randEngine;
        
        
    };
}
#endif /* RNGGENERATOR_H */

