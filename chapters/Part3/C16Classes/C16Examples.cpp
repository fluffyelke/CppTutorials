/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C16Examples.h"
#include "C16Date.h"
#include "C16Chrono.h"

namespace C16Classes {
    
    void c16Examples1() {
        C16::Date myDate;
        myDate.printDate();
        myDate.setAmericanFormat();
        myDate.printDate();
        
        std::cout << "Chrono Date\n\n" << std::endl;
        
        C16Chrono::Date currDate;
        std::cout << currDate.dateAsString() << std::endl;
//        currDate.addYear(25);
//        std::cout << currDate.dateAsString() << std::endl;
//        currDate.addDay(30);
//        std::cout << currDate.dateAsString() << std::endl;
//        for(int i = 1; i < 365; ++i) {
            currDate.addDay(19851);
            std::cout << currDate.dateAsString() << std::endl;
//        }
    }
    
}