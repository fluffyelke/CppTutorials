/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include "C17Examples.h"
#include "Tracer.h"
#include "C17Shapes.h"

namespace C17 {
    void simpleExample() {
        class myClass {
        public:
            myClass() {
                C17::C17Tracer logger("myClass()");
            }
        };
        myClass obj;
        myClass obj2;
        myClass obj3;
        myClass obj4;
    }
    
    void dynamicClassExample() {
        DynamicClass* d = new DynamicClass();
        d->destroy();
    }
    void shapeExample() {
        Shape* obj = new Circle;
        delete obj;
    }
}