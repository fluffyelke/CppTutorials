/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "C08Excercises.h"

namespace C08 {
    
    struct Optimized {
        long double ld;
        double d;
        long l;
        int i;
        char c;
        bool b;
    };
    
    void ex01() {
        Optimized obj;
        std::cout << sizeof(bool) << std::endl;
        std::cout << sizeof(char) << std::endl;
        std::cout << sizeof(int) << std::endl;
        std::cout << sizeof(long) << std::endl;
        std::cout << sizeof(double) << std::endl;
        std::cout << sizeof(long double) << std::endl;
        std::cout << sizeof(Optimized) << std::endl;
    }
    void ex02() {
        const char* months[12] = {
          "January",
          "February",
          "March",
          "April",
          "May",
          "June",
          "July",
          "August",
          "September",
          "October",
          "November",
          "December",
        }; 
        int days[12] = {
          31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,  
        };
//        constexpr int size = 12;
        
        struct Year {
            const char* months;
            int days;
        };
        Year myYear[12] {
            {"January", 31},
            {"February", 29},
            {"March", 31},
            {"April", 30},
            {"May", 31},
            {"June", 30},
            {"July", 31},
            {"August", 31},
            {"September", 30},
            {"October", 30},
            {"November", 30},
            {"December", 30}
        };
    }
    
    std::ostream& operator << (std::ostream& os, const Date& obj) {
        std::cout << obj.day << " " << std::string(obj.month) << " " << obj.year;
        return os;
    }
    std::istream& operator >> (std::istream& is, Date& obj) {
        is >> obj.day;
        std::string temp = "";
        is >> temp;
        obj.month = temp.c_str();
        is >> obj.year;
//        is >> obj.day >> obj.month >> obj.year;
        return is;
    }
    
    void testDateEx05() {
        Date currDate{ "March", 7, 2024 };
        std::cout << currDate << std::endl;
        
        Date tempDate;
        std::string temp = "";
        std::cin >> tempDate;
        std::cout << tempDate << std::endl;
        
    }
    
    std::ostream& operator << (std::ostream& os, const Seasons& obj) {
        switch(obj) {
            case Seasons::autumn:
                os << "Autumn";
                break;
            case Seasons::spring:
                os << "Spring";
                break;
            case Seasons::summer:
                os << "Summer";
                break;
            case Seasons::winter:
                os << "Winter";
                break;
        }
        return os;
    }
    std::istream& operator >> (std::istream& is, Seasons& obj) {
        std::string temp; 
        std::cout << "Choose an season from 'Autumn', 'Spring', 'Winter', 'Summer' : ";
        is >> temp;
        std::cout << std::endl;
        if(temp == "Spring") {
            obj = Seasons::spring;
        }
        else if(temp == "Summer") {
            obj = Seasons::summer;
        }
        else if(temp == "Autumn") {
            obj = Seasons::autumn;
        }
        else if(temp == "Winter") {
            obj = Seasons::winter;
        }
        return is;
    }
    Seasons& operator ++ (Seasons& obj) {
        switch(obj) {
            case Seasons::spring:
                obj = Seasons::summer;
                break;
            case Seasons::summer:
                obj = Seasons::autumn;
                break;
            case Seasons::autumn:
                obj = Seasons::winter;
                break;
            case Seasons::winter:
                obj = Seasons::spring;
                break;
        }
        return obj;
    }
    
    Seasons operator ++ (Seasons& obj, int) {
        Seasons temp = obj;
        switch(obj) {
            case Seasons::spring:
                obj = Seasons::summer;
                break;
            case Seasons::summer:
                obj = Seasons::autumn;
                break;
            case Seasons::autumn:
                obj = Seasons::winter;
                break;
            case Seasons::winter:
                obj = Seasons::spring;
                break;
        }
        return temp;
    }
    
    Seasons& operator -- (Seasons& obj) {
        switch(obj) {
            case Seasons::spring:
                obj = Seasons::winter;
                break;
            case Seasons::summer:
                obj = Seasons::spring;
                break;
            case Seasons::autumn:
                obj = Seasons::summer;
                break;
            case Seasons::winter:
                obj = Seasons::autumn;
                break;
        }
        return obj;
    }
    Seasons operator -- (Seasons& obj, int) {
        switch(obj) {
            case Seasons::spring:
                obj = Seasons::winter;
                break;
            case Seasons::summer:
                obj = Seasons::spring;
                break;
            case Seasons::autumn:
                obj = Seasons::summer;
                break;
            case Seasons::winter:
                obj = Seasons::autumn;
                break;
        }
        return obj;
    }
    void testSeasonsEx06() {
        Seasons currSeason = Seasons::spring;
        std::cout << currSeason << std::endl;
        std::cout << ++currSeason << std::endl;
        
        Seasons tempSeason = currSeason++;
//        currSeason = currSeason++;
        std::cout << tempSeason << std::endl;
        std::cout << currSeason << std::endl;
    }
}