/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C16Excercises.h"
#include "C16Chrono.h"
#include "C16Histogram.h"
#include "../../../utils/RNGGenerator.h"

namespace C16Classes {
    
    void ex02() {
        C16Chrono::Date myDate;
        std::cout << "Difference between jan 1 1970 and today date is: " << C16Chrono::numberOfDaysSinceDefaultDate() << std::endl;
    }
    void ex04() {
        C16::Histogram myHist(0, 100, 10);
        std::cout << "After creation" << std::endl;
        while(true) {
            static int count = 0;
            myHist.update(RNG::RNGGenerator::getInstance().getDouble(0, 100));
            if(count == 10000000) {
                break;
            }
            count++;
        }
        std::cout << myHist << std::endl;
    }
    
}