/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "UsefulMacros.h"


namespace Macros {
    void printMacros() {
        std::cout << "print macros __cplusplus : " << __cplusplus << std::endl;
        std::cout << "print macros __DATE__ : " << __DATE__ << std::endl;
        std::cout << "print macros __TIME__ : " << __TIME__ << std::endl;
        std::cout << "print macros __FILE__ : " << __FILE__ << std::endl;
        std::cout << "print macros __LINE__ : " << __LINE__ << std::endl;
        std::cout << "print macros __func__ : " << __func__ << std::endl;       
    }
}