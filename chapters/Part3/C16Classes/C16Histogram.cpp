/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "C16Histogram.h"

namespace C16 {
    Histogram::Histogram(double start, double last, int intervals) {
        if(start < 0 || start > last) {
            std::cerr << "start cant be negative and greater than last";
            start = 0;
        }
        if(last < 0 || last < start) {
            std::cerr << "start cant be negative and greater than last";
            last = 1;
        }
        if(intervals < 0) {
            std::cerr << "start cant be negative and greater than last";
            intervals = 1;
        }
        double distance = last / static_cast<double>(intervals);
        diff = distance;
        for(int i = 0; i < intervals; ++i) {
            histograms.emplace_back(std::make_pair(distance * i, 0));
        }
        for(auto elem : histograms) {
            std::cout << elem.first << ": " << elem.second << std::endl;
        }
    }
    
    void Histogram::update(const double value) {
        for(int i = 0; i < histograms.size(); ++i) {
            if((histograms.at(i).first + diff) > value ) {
                histograms.at(i).second++;
                break;
            }
        }
    } 
    
    std::ostream& operator << (std::ostream& os, const Histogram& obj) {
        
        for(auto elem : obj.histograms) {
            os << elem.first << ": " << elem.second << std::endl;
        }
        
        return os;
    }
}