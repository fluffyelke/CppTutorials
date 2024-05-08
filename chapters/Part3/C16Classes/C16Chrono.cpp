/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C16Chrono.h"
#include <sstream>

namespace C16Chrono {
    
    //Month Overloads
    Month& operator ++ (Month& obj) {
        switch(obj) {
            case Month::january: return obj = Month::february;
            case Month::february: return obj = Month::march;
            case Month::march: return obj = Month::april;
            case Month::april: return obj = Month::may;
            case Month::may: return obj = Month::june;
            case Month::june: return obj = Month::july;
            case Month::july: return obj = Month::august;
            case Month::august: return obj = Month::september;
            case Month::september: return obj = Month::october;
            case Month::october: return obj = Month::november;
            case Month::november: return obj = Month::december;
            case Month::december: return obj = Month::january;
        }
        return obj;
    }
    Month& operator ++ (Month& obj, int) {
        return obj = Month::april;
    }
    
    Month& operator -- (Month& obj) {
        switch(obj) {
            case Month::january: return obj = Month::december;
            case Month::february: return obj = Month::january;
            case Month::march: return obj = Month::february;
            case Month::april: return obj = Month::march;
            case Month::may: return obj = Month::april;
            case Month::june: return obj = Month::may;
            case Month::july: return obj = Month::june;
            case Month::august: return obj = Month::july;
            case Month::september: return obj = Month::august;
            case Month::october: return obj = Month::september;
            case Month::november: return obj = Month::october;
            case Month::december: return obj = Month::november;
        }
        return obj;
    }
    Month& operator -- (Month& obj, int) {
        return obj = Month::april;
    }
    
    Date::Date(int dd, Month mm, int yy) 
        : day{dd},
          month{mm}, 
          year{yy} {
              if(day == 0) {
                  day = defaultDate().day;
              }
              if(month == Month{}) {
                  month = defaultDate().month;
              }
              if(year == 0) {
                  year = defaultDate().year;
              }
              
              if(!isValid()) {
                  throw BadDate{};
              }
    }
   
    //checks
    bool Date::isValid() {
        return isDate(day, month, year);
    }
    
    //getters
    inline int Date::getDay() const {
        return day;
    }
    inline int Date::getYear() const {
        return year;
    }
    inline Month Date::getMonth() const {
        return month;
    }
    
    //setters
    Date& Date::addDay(int days) {
        while(true) {
            if(days > 0) {
                day += 1;
                if(day > 31) {
                    day = 1;
                    if(month == Month::december) {
                        year++;
                    }
                    ++month;
                    
                }
                else if(day >= 30) {
                    if(month == Month::february) {
                        day = 1;
                        ++month;
                    }
                    else {
                        if(day > 30) {
                             if( month == Month::april || month == Month::june || month == Month::september || month == Month::november) {
                                day = 1;
                                ++month;
                             }
                        }
                    }
                }
                else if(day == 29) {
                    if(month == Month::february) {
                        if(!isLeapYear(getYear())) {
                            day = 1;
                            ++month;
                        }
                    }
                }
                days--;
            }
            else {
                day -= 1;
                if(day == 0) {
                    if(month == Month::march) {
                        if(!isLeapYear(getYear())) {
                            day = 28;
                        }
                        else {
                            day = 29;
                        }
                       
                    }
                    if(month == Month::april || month == Month::june || month == Month::september || month == Month::november) {
                        day = 31;
                    }
                    else {
                        day = 30;
                    }
                    if(month == Month::january) {
                        year--;
                    }
                    --month;
                }
                days++;
            }
            if(days == 0) {
                break;
            }
        }
        return *this;
    }
    
    Date& Date::addMonth(int n) {
        if (n == 0) {
            return *this;
        }
        //handle positive n, future time
        if(n > 0) {
            int deltaY = n / 12;    //number of whole years
            int newMonth = static_cast<int>(month) + n % 12;        //number of months ahead
            if(newMonth > 12) {     //not december is represented by 12
                ++deltaY;
                newMonth -= 12;
            }
            
            //handle the cases where month newMonth, doesn't have that day 
            //...
            //////
            year += deltaY;
            month = static_cast<Month>(newMonth);
            increaseMonth(*this);
            
            return *this;
        }
        
        //handle negative n, back in time
        //...
        /////
        return *this;
    }
    Date& Date::addYear(int years) {
        year += years;
        return *this;
    }
    
    std::string Date::dateAsString() const {
        std::string result{};
        result = std::to_string(day) + " " + monthAsString(month) + " " + std::to_string(year);
        return result;
    }
    
    //Helper Methods
    bool isDate(int currDay, Month currMonth, int currYear) {
        
        int numDays;
        
        switch (currMonth) {
            case Month::february:
                numDays = 28 + isLeapYear(currYear);
                break;
            case Month::april:
            case Month::june:
            case Month::september:
            case Month::november:
                numDays = 30;
                break;
            case Month::january:
            case Month::march:
            case Month::may:
            case Month::july:
            case Month::august:
            case Month::october:
            case Month::december:
                numDays = 31;
                break;
            default:
                return false;
        }
        
        return currDay >= 1 && currDay <= numDays;
        
    }
    bool isLeapYear(int y) {
        if(y % 4 == 0) {
            if(y % 100 == 0) {
                return (y % 400 == 0);  //is leap year
            }
            return true;    //is leap year
        }   
        return false;   //is not leap year
    }    
    
    void increaseMonth(Date& currDate) {
        switch(currDate.getMonth()) {
            case Month::february:
                if(currDate.getDay() >= 29) {
                    if(!isLeapYear(currDate.getYear())) {
                        ++currDate;
                    }
                }
                break;
            case Month::april:
            case Month::june:
            case Month::september:
            case Month::november:
                if(currDate.getDay() == 31) {
                    ++currDate;
                }
                break;
        }
    }
    
    //set default date
    const Date& defaultDate() {
        static Date defDate{1, Month::january, 1970};
        return defDate;
    }
    
    //operators 
    inline bool operator == (Date left, Date right) {
        return left.getDay() == right.getDay() && 
               left.getMonth() == right.getMonth() && 
               left.getYear() == right.getYear();
    }
    
    inline bool operator != (Date left, Date right) {
        return !(left == right);
    }
    
    inline bool operator < (Date left, Date right) {
        return left.getYear() <= right.getYear() && 
               left.getMonth() <= right.getMonth() && 
               left.getDay() < right.getDay();
    }
    
    inline bool operator > (Date left, Date right) {
        return !(left < right);
    }
    
    inline bool operator <= (Date left, Date right) {
        return (left == right) || (left < right);
    }
    inline bool operator >= (Date left, Date right) {
        return (left == right) || (left > right);
    }   
    
    inline Date& operator ++ (Date& currDate) {
        return currDate.addDay(1);
    }
    
    inline Date& operator -- (Date& currDate) {
        return currDate.addDay(-1);
    }
    
    inline Date& operator += (Date& currDate, int days) {
        return currDate.addDay(days);
    }
    
    inline Date& operator -= (Date& currDate, int days) {
        return currDate.addDay(-days);
    }
    
    inline Date operator + (Date currDate, int days) {
        return currDate += days;
    }
    
    inline Date operator - (Date currDate, int days) {
        return currDate -= days;
    }
    
    //stream operators
    
    
    std::string monthAsString(Month m) {
        std::string result{};
        switch(m) {
            case Month::january: 
                result = "January";
                break;
            case Month::february: 
                result = "February";
                break;
            case Month::march: 
                result = "March";
                break;
            case Month::april: 
                result = "April";
                break;
            case Month::may: 
                result = "May";
                break;
            case Month::june: 
                result = "June";
                break;
            case Month::july: 
                result = "July";
                break;
            case Month::august: 
                result = "August";
                break;
            case Month::september: 
                result = "September";
                break;
            case Month::october: 
                result = "October";
                break;
            case Month::november: 
                result = "November";
                break;
            case Month::december: 
                result = "December";
                break;
            default:
                result = "Error Month";
                break;
        }
        
        return result;
    }
    
    std::ostream& operator << (std::ostream& os, const Date& date) {
        os << date.getDay() << " " << monthAsString(date.getMonth()) << " " << date.getYear();
        return os;
    }
    
    
    Month strMonthToMonth(std::string m) {
        for(auto& elem : m) {
            elem = std::tolower(elem);
        }
        if(m == "jan" || m == "january") {
            return Month::january;
        }
        if(m == "feb" || m == "february") {
            return Month::february;
        }
        if(m == "mar" || m == "march") {
            return Month::march;
        }
        if(m == "apr" || m == "april") {
            return Month::april;
        }
        if(m == "may") {
            return Month::may;
        }
        if(m == "jun" || m == "june") {
            return Month::june;
        }
        if(m == "jul" || m == "july") {
            return Month::july;
        }
        if(m == "aug" || m == "august") {
            return Month::august;
        }
        if(m == "sep" || m == "september") {
            return Month::september;
        }
        if(m == "oct" || m == "october") {
            return Month::october;
        }
        if(m == "nov" || m == "november") {
            return Month::november;
        }
        if(m == "dec" || m == "december") {
            return Month::december;
        }
        return Month::january;
    }
    
    const Date& currentDate() {
        static bool initCurrentDate = false;
        static Month current;
        static int day{0};
        static int year{0};
        if(!initCurrentDate) {
            std::stringstream ss;
            ss << __DATE__;
            std::cout << "Current Date: " << ss.str() << std::endl;
            std::string month{""};
            ss >> month;
            current = strMonthToMonth(month);
            ss >> day; 
            ss >> year;
            initCurrentDate = true;
        }
        static Date currentDate{day, current, year};
        return currentDate;
    }
    
    //excercises
    int numberOfDaysSinceDefaultDate() {
        int count = 0;
        Date defDate{defaultDate().getDay(), defaultDate().getMonth(), defaultDate().getYear()};
        while(defDate != currentDate()) {
            defDate.addDay(1);
            count++;
        }
        return count;
    }
    
}