/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   C02Examples.cpp
 * Author: default
 * 
 * Created on February 7, 2024, 1:49 PM
 */

#include "C02Examples.h"
#include <iostream>
#include <stdexcept>

namespace C02 {
    
    void simpleExample() {
        std::cout << "PSsttt" << std::endl;
    }
    
    double square(double d) {
        return d * d;
    }
    
    bool accept() {
        std::cout << "Do you want to proceed? ";
        char answer = 0;
        std::cin >> answer;
        
        switch(answer) {
            case 'y':
            case 'Y':
                return true;
                break;
            case 'n':
            case 'N':
                return false;
                break;
            default:
                std::cout << "I take that as No" << std::endl;
                return false;
                break;
        }   //end switch statement.
        
        if(answer == 'y' || answer == 'Y') {
            return true;
        }
        return false;
    }   //end accept()
    
    bool accept2() {
        int attempts = 1;
        while(attempts < 4) {
            std::cout << "Do you want to Proceed? Yes or No?" << std::endl;
            
            char answer{0};
            std::cin >> answer;
            switch(answer) {
                case 'y':
                case 'Y':
                    return true;
                case 'n':
                case 'N':
                    return false;
                default:
                    std::cout << "Sorry, i don't understand that." << std::endl;
                    attempts++;
                    break;
            }   //end switch
        }   //end while
        std::cout << "I take that as no." << std::endl;
        return false;
    }   //end of accept2()
    
    void copyArrFunc() {
        constexpr int arrSize = 10;
        int fromArr[arrSize] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int toArr[arrSize]; //to become copy of fromArr.
        
        for(auto index = 0; index < arrSize; ++index) {
            toArr[index] = fromArr[index];
        }
    }   //end of copyArrFunc()
    
    void printArr() {
        constexpr int arrSize = 10;
        int myArr[arrSize] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        for(auto elem : myArr) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
        
        for(auto elem : {10, 20, 30, 40, 50}) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    } //end printArr()
    
    void referToArrElem() {
        int myArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        for(auto elem : myArr) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
        for(auto& elem : myArr) {
            elem *= 2;
        }
        for(auto elem : myArr) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
        
    }   //end referToArr()
    
    int countChars(const char* arr, const char letter) {
        if(arr == nullptr) {
            return 0;
        }
        int count = 0;
        for(; *arr != '\0'; ++arr) {
            if(*arr == letter) {
                count++;
            }
        }
        return count;
    }   //end count chars.
    
    void vectorInit(C02Vector& myVec, int lSize) {
        myVec.data = new double[lSize];
        myVec.size = lSize;
    }
    
    double readAndSumC02Vector(int lSize) {
        C02Vector myVec;
        vectorInit(myVec, lSize);
        
        for(int i = 0; i < lSize; ++i) {
            std::cin >> myVec.data[i];
        }
        
        double sum = 0;
        for(int i = 0; i < lSize; ++i) {
            sum += myVec.data[i];
        }
        return sum;
    }   //end readAndSum()
    
    C02CVector::C02CVector(int lSize) 
    {
        if(lSize < 0) {
            std::string log = "lSize is negative... Must be positive: ";
            log += std::to_string(lSize);
            throw std::length_error{ log };
        }
        data = new double[lSize];
        mSize = lSize;
    }
    double& C02CVector::operator [] (int lIndex) {
        if(lIndex < 0 || lIndex >= mSize) {
            std::string myError("C02CVector::operator [] index out of range: ");
            myError += std::to_string(lIndex);
            throw std::out_of_range{myError}; 
        }
        return data[lIndex];
    }
    int C02CVector::size() const {
        return mSize;
    }
    
    double readAndSumC02CVector(int lSize) {
        C02Vector myVec{lSize};
          for(int i = 0; i < lSize; ++i) {
            std::cin >> myVec.data[i];
        }
        
        double sum = 0;
        for(int i = 0; i < lSize; ++i) {
            sum += myVec.data[i];
        }
        return sum;
    }
    

    
    TrafficLights& operator ++ (TrafficLights& obj) {
        switch(obj) {
            case TrafficLights::green:
                return obj = TrafficLights::yellow;
            case TrafficLights::yellow:
                return obj = TrafficLights::red; 
            case TrafficLights::red:
                return obj = TrafficLights::green; 
        }
        return obj;
    }
    
    Color& operator -- (Color& obj) {
        switch(obj) {
            case Color::red: 
                return obj = Color::green;
            case Color::green: 
                return obj = Color::blue;
            case Color::blue: 
                return obj = Color::red;
        }
        return obj;
    }
    
    std::string colorToString(const Color obj) {
        switch(obj){
            case Color::red:
                return "Red";
            case Color::green:
                return "Green";
            case Color::blue:
                return "Blue";
        }
        return "";
    }
    std::string trafficLightsToString(const TrafficLights obj) {
        switch(obj) {
            case TrafficLights::green:
                return "Green";
            case TrafficLights::red:
                return "Red";
            case TrafficLights::yellow:
                return "Yellow";
        }
        return "";
    }
    void enumTest() {
        Color myColor = Color::blue;
        std::cout << "Color Before decrement: " << colorToString(myColor) << std::endl;
        --myColor;
        std::cout << "Color After decrement: " << colorToString(myColor) << std::endl;
        
        TrafficLights myLights = TrafficLights::green;
        std::cout << "TrafficLights Before increment: " << trafficLightsToString(myLights) << std::endl;
        ++myLights;
        std::cout << "TrafficLights After increment: " << trafficLightsToString(myLights) << std::endl;
    }
    
    void testLengthError() {
        try {
            C02CVector myVec{-27};
        }
        catch(std::length_error e) {
            std::cout << "Exception catch at: testLengthError() 1 " << e.what() << std::endl;
        }
        catch(std::bad_alloc e) {
            std::cout << "Exception catch at: testLengthError() 1 " << e.what() << std::endl;
        }
    }
    
    void staticAssertExample() {
        constexpr double speedOfLight = 299792.99;
        constexpr double localMax = 160.0 / (60 * 60);
        //This will provide error at compile time.!!!!
        static_assert(localMax < speedOfLight, "You cant be faster than light");
    }
}   //end namespace Part1

