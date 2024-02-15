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
    extern bool accept3();
    
    extern void copyArrFunc();
    extern void printArr();
    extern void referToArrElem();
    
    extern int countChars(const char* arr, const char letter);
    
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


//Structures
struct C02Vector {
    int size;
    double* data;
};  //end class Vector

extern void vectorInit(C02Vector& myVec, int lSize);
extern double readAndSumC02Vector(int lSize);

class C02CVector {
public:
    C02CVector(int lSize);
    double& operator [] (int index);
    int size() const;
private:
    int mSize;
    double* data;
};

extern double readAndSumC02CVector(int lSize);

//Enumerators
//enum class, by default has only assignment, initialization, and comparison operators defined. 
// '=', '==', '<', '>'
enum class Color {
    red,
    blue,
    green,
};
enum class TrafficLights {
    green,
    yellow,
    red,
};

TrafficLights& operator ++ (TrafficLights& obj);    //prefix increment
Color& operator -- (Color& obj);                    //prefix decrement

extern void enumTest();

extern void testLengthError();
extern void staticAssertExample();

}   //end namespace C02
#endif /* C02EXAMPLES_H */

