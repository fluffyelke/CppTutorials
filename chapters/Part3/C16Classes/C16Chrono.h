/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C16Chrono.h
 * Author: default
 *
 * Created on April 26, 2024, 10:35 AM
 */

#ifndef C16CHRONO_H
#define C16CHRONO_H

#include <string>
#include <iostream>

namespace C16Chrono {
    
    enum class Month {
        january = 1,
        february, 
        march, 
        april, 
        may, 
        june, 
        july, 
        august, 
        september, 
        october, 
        november, 
        december
    };
    
    extern Month& operator ++ (Month& obj);
    extern Month& operator ++ (Month& obj, int);
    extern Month& operator -- (Month& obj);
    extern Month& operator ++ (Month& obj, int);
    
    class Date {
    public:
        //exception class
        class BadDate {
            
        };
        
        explicit Date(int dd = {}, Month mm = {}, int yy = {});     // {} means "peack a default"
        
        //non modifiyng functions for examining the Date:
        int getDay() const;
        Month getMonth() const;
        int getYear() const;
        
        std::string dateAsString() const;   //string representation of Date
        void dateAsCStr(char str[], int max) const;     //string as C-style char
        
        // modifying functions to change the Date
        Date& addYear(int n);               //add n years
        Date& addMonth(int n);               //add n months
        Date& addDay(int n);               //add n days
        
    private:
        bool isValid();                     //check if date represent a date.
        int day;
        Month month;
        int year;
    };
    
    //helper methods
    extern bool isDate(int d, Month m, int y);           //true for valid date
    extern bool isLeapYear(int y);       //true for leap year
    extern void increaseMonth(Date& currDate);
    extern int daysDiff(Date left, Date right); //distance between 2 dates in days.
    extern Date nextWeekday(Date currDate);
    extern Date nextSaturday(Date currDate);
    

    
    extern bool operator == (Date left, Date right);
    extern bool operator != (Date left, Date right);
    extern bool operator < (Date left, Date right);
    extern bool operator > (Date left, Date right);
    extern bool operator <= (Date left, Date right);
    extern bool operator >= (Date left, Date right);
    extern Date& operator ++ (Date& currDate); 
    extern Date& operator -- (Date& currDate);
    extern Date& operator += (Date& currDate, int days);
    extern Date& operator -= (Date& currDate, int days);
    extern Date operator + (Date currDate, int days);
    extern Date operator - (Date currDate, int days);
    
    extern const Date& defaultDate();      //the default date.  {1,1,1970}
    extern const Date& currentDate();      //the current date
    
    extern std::ostream& operator << (std::ostream& os, const Date& date);      //print date to os
    extern std::istream& operator >> (std::istream& is, Date& date);
    
    extern std::string monthAsString(Month m);
    extern Month strMonthToMonth(std::string m);
    //Excercises
    extern int numberOfDaysSinceDefaultDate();
}

#endif /* C16CHRONO_H */

