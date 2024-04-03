/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C11Examples.h"
#include <iostream>
#include <algorithm>

namespace C11 {
    constexpr unsigned short middle(int a) {
        return (a >> 8) & 0xFFFF;
    }
    void getMiddleOfANumber() {
        long long int x = 0xFF00FF00; 
        std::cout << std::dec << x << std::endl;
        long long int middleNum = middle(x);
        std::cout << std::dec << middleNum << std::endl; 
    }
    
    void printModuloExample(const std::vector<int>& myVec, std::ostream& os, int m) {
        //We can use lambda here or,
        std::for_each(myVec.begin(), myVec.end(), [&os, m](int vecElem) {
            if(vecElem % m == 0) {
                os << vecElem << std::endl;
            }
        });
        std::cout <<"Function Object After lambda" << std::endl;
        //we can use Function Object ModuloPrint
        std::for_each(myVec.begin(), myVec.end(), ModuloPrint{os, m});
    }
    
    void testModulo() {
        std::vector<int> myVec = {
          1, 2, 3, 4, 5, 6, 7, 8, 9, 10  
        };
        printModuloExample(myVec, std::cout, 3);
    }
}