/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C16Histogram.h
 * Author: default
 *
 * Created on May 7, 2024, 12:25 PM
 */

#ifndef C16HISTOGRAM_H
#define C16HISTOGRAM_H
#include <vector>

namespace C16 {
    class Histogram {
        std::vector<std::pair<double, int>> histograms;
        double diff;
    public:
        explicit Histogram(double start, double last, int intervals );
        
        void update(const double value);
        
        friend std::ostream& operator << (std::ostream& os, const Histogram& obj);
    };
}

#endif /* C16HISTOGRAM_H */

