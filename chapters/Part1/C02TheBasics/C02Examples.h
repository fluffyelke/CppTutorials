/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   C02Examples.h
 * Author: default
 *
 * Created on February 7, 2024, 1:49 PM
 */

#ifndef C02EXAMPLES_H
#define C02EXAMPLES_H
#include <string>

namespace C02 {
    
    extern void simpleExample();
    extern double square(double d);
    extern bool accept();
    
    
    class SecondClass {
    public:
        void someFunc() {
            
        }
    };
class SimpleClass {
    enum class myEnum {
        one = 100, 
        two, 
        three,
    };
public:
    SimpleClass(const int id, std::string& str) {
        simpleExample();
        obj2.someFunc();
        std::string myStr = "pssttt\n";
    }
    
    void func1();
    myEnum obj = myEnum::one;
    SecondClass obj2;
private:
    int a;
};

}
#endif /* C02EXAMPLES_H */

