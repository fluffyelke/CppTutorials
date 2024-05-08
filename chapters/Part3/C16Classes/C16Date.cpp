/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C16Date.h"
#include <sstream>
#include <iostream>
namespace C16 {
    
    Date Date::defaultDate;
    
    Date::Date(int d, int m, int y) {
        setDefaultDate();
        init(d, m, y);
    }
    
    void Date::init(int d, int m, int y) {
        day = d ? d : defaultDate.day;
        month = m ? m : defaultDate.month;
        year = y ? y : defaultDate.year;
        format = DateFormat::Europe;
    }
    
    void Date::addDay(int days) {
        day += days;
    }
    void Date::addMonth(int months) {
        month += months;
    }
    void Date::addYear(int years) {
        year += years;
    }
    
    void Date::setDefaultDate() {
        std::stringstream ss; 
        ss << __DATE__;
        
        std::string strM{};
        ss >> strM;
        
        int mm = strMonthToInt(strM);
        int dd{0};
        ss >> dd;
        int yy{0};
        ss >> yy;
//        std::cout << dd << ", " << mm << ", " << yy << std::endl;
        defaultDate.init(dd, mm, yy);
    }
    
    void Date::printDate() {
        std::string result{""};
        result += std::to_string(day) + " ";
        std::string temp = intMonthToStr(month);
        updateMonthFormat(temp);
        result += temp + " ";
        result += std::to_string(year);
        std::cout << result << std::endl;
        
    }
        
    void Date::updateMonthFormat(std::string& m) {
        if(format == DateFormat::American) {
            m.erase(m.begin() + 3, m.end());
        }
    }
    
    void Date::setFormat(const DateFormat newFormat) {
        format = newFormat;
    }
    
    void Date::setAmericanFormat() {
        format = DateFormat::American;
    }
    
    std::string intMonthToStr(int& m) {
        if(m < 1 || m > 12) {
            return "Error m must be between [1:12]";
        }
        std::string currMonth{""};
        switch(m) {
            case 1:
                currMonth = "January"; 
                break;
            case 2:
                currMonth = "February"; 
                break;
            case 3:
                currMonth = "March"; 
                break;
            case 4:
                currMonth = "April"; 
                break;
            case 5:
                currMonth = "May"; 
                break;
            case 6:
                currMonth = "June"; 
                break;
            case 7:
                currMonth = "July"; 
                break;
            case 8:
                currMonth = "August"; 
                break;
            case 9:
                currMonth = "September"; 
                break;
            case 10:
                currMonth = "October"; 
                break;
            case 11:
                currMonth = "November"; 
                break;
            case 12:
                currMonth = "December"; 
                break;
            default:
                return "Error should not be possible to enter here";
        }
      
        return currMonth;
    }

    //Helper Methods
    int strMonthToInt(std::string& month) {

        if(std::isdigit(month.at(0))) {
            return -1;
        }
        
        for(auto& elem : month) {
            elem = std::tolower(elem);
        }
        
        if(month == "jan" || month == "january") {
            return 1;
        }
        if(month == "feb" || month == "february") {
            return 2;
        }
        if(month == "mar" || month == "march") {
            return 3;
        }
        if(month == "apr" || month == "april") {
            return 4;
        }
        if(month == "may" || month == "may") {
            return 5;
        }
        if(month == "jun" || month == "june") {
            return 6;
        }
        if(month == "jul" || month == "july") {
            return 7;
        }
        if(month == "aug" || month == "august") {
            return 8;
        }
        if(month == "sep" || month == "september") {
            return 9;
        }
        if(month == "oct" || month == "october") {
            return 10;
        }
        if(month == "nov" || month == "november") {
            return 11;
        }
        if(month == "dec" || month == "december") {
            return 12;
        }
        return 0;
    }
}