/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C11Examples.h
 * Author: default
 *
 * Created on March 13, 2024, 1:56 PM
 */

#ifndef C11EXAMPLES_H
#define C11EXAMPLES_H

#include <vector>
#include <ostream>


namespace C11 {
    extern constexpr unsigned short middle(int a);
    extern void getMiddleOfANumber();
    
    //This is using lambda and is equivalent of a class ModuloPrint
    extern void printModuloExample(const std::vector<int>& myVec, std::ostream& os, int m);
    
    class ModuloPrint {
        std::ostream& os;
        int m;
    public:
        ModuloPrint(std::ostream& lOs, int lMm) 
            : os{lOs},
                    m{lMm} {
                
        }
        void operator () (int x) const {
            if(x % m == 0) {
                os << x << std::endl;
            }
        }
    };
    
    extern void testModulo();
}

#endif /* C11EXAMPLES_H */

