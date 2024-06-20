/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   Tracer.h
 * Author: default
 *
 * Created on May 8, 2024, 10:37 AM
 */

#ifndef TRACER_H
#define TRACER_H

#include <iostream>
#include <string>

#define PRINT_LOG(msg) std::cout << msg << std::endl

namespace C17 {
    class C17Tracer {
        std::string log;
    public:
        C17Tracer(const std::string& msg);
        ~C17Tracer();
    };
}

#endif /* TRACER_H */

