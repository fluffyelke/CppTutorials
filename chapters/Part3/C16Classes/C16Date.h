/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C16Date.h
 * Author: default
 *
 * Created on April 24, 2024, 11:03 AM
 */

#ifndef C16DATE_H
#define C16DATE_H

#include <string>
#include <sstream>

namespace C16 {
    
    class Date {
        
        int day;
        int month;
        int year;
        
        void init(int d, int m, int y);
        static Date defaultDate;
        
        
        enum class DateFormat {
            Europe, 
            American,
        };
        
        DateFormat format;
    public:
        
        //Constructors
        Date(int d = 0, int m = 0, int y = 0);          //day, month, year
        Date(const std::string& dateStr);   //String representation of a year
        
        void addDay(int days);
        void addMonth(int months);
        void addYear(int years);
        
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        
        void setFormat(const DateFormat newFormat = DateFormat::Europe);
        void updateMonthFormat(std::string& m);
        static void setDefaultDate();
        
        void printDate();
        
        void setAmericanFormat();
        
    };
    
    extern int strMonthToInt(std::string& month);
    extern std::string intMonthToStr(int& m);
    
}

#endif /* C16DATE_H */

