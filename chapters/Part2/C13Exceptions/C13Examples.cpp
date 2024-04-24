/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C13Examples.h"
#include "C13Vector.h"


namespace C13 {
    void vectorExamplev1() {
        C13VectorEx::C13Vector<int> myVec(10);
        std::cout << myVec.capacity() << std::endl;
        std::cout << myVec.size() << std::endl;
        myVec.push_back(10);
        std::cout << myVec.capacity() << std::endl;
        std::cout << myVec.size() << std::endl;
//        myVec.push_back(20);
//        myVec.push_back(30);
//        myVec.push_back(40);
//        myVec.push_back(50);
//        myVec.push_back(60);
    }
}