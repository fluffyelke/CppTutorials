/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "Tracer.h"

namespace C17 {
    
    C17Tracer::C17Tracer(const std::string& msg) 
        : log{msg}{
        PRINT_LOG(log + " created! ");
    }
    C17Tracer::~C17Tracer() {
        PRINT_LOG("~" + log + " destroyed! ");
    }
    
}