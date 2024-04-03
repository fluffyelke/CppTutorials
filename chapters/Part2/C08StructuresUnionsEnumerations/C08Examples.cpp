/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include <iostream>

#include "C08Examples.h"

namespace C08 {
    void testAddress1() {
        Address firstAddress;
        firstAddress.name = "Vanya Dimitrova";
        firstAddress.number = 55;
        
        Address secondAddres = {
          "Vanya Dimitrova",
          66,
          "Kostenski Vodopad",
          "Sofia",
          {'N', 'J'},
          "07974"
        };
        printAddress(&secondAddres);
        printAddress(secondAddres);
    }
    void printAddress(Address* obj) {
        std::cout << obj->name << std::endl
                  << obj->number << " " << obj->street << std::endl
                  << obj->town << std::endl 
                  << obj->state[0] << obj->state[1] << " " << obj->zip << std::endl;
        
        //This is equivalent to
        std::cout << (*obj).name << std::endl
                  << (*obj).number << " " << (*obj).street << std::endl
                  << (*obj).town << std::endl 
                  << (*obj).state[0] << (*obj).state[1] << " " << (*obj).zip << std::endl;
    }
    void printAddress(const Address& obj) {
        std::cout << obj.name << std::endl
                  << obj.number << " " << obj.street << std::endl
                  << obj.town << std::endl 
                  << obj.state[0] << obj.state[1] << " " << obj.zip << std::endl;
    }
}