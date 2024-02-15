/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "ContainersExamples.h"


namespace C03 {
    C03::C03Vector readFrom(std::istream& is) {
        C03Vector myVec;
        for(double elem; is >> elem;) {
            myVec.pushBack(elem);
        }
        return myVec;
    }
    void useContainer(IContainer& obj) {
        for(int i = 0; i < obj.getSize(); ++i) {
            std::cout << obj[i] << " ";
        }
        std::cout << std::endl;
    }
}