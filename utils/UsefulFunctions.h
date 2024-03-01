/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   UsefulFunctions.h
 * Author: default
 *
 * Created on February 28, 2024, 12:20 PM
 */

#ifndef USEFULFUNCTIONS_H
#define USEFULFUNCTIONS_H

#include <algorithm>
#include <iterator>
#include <iostream>
#include <fstream>


namespace Utils {

    template<typename T, typename Predicate>
    int countElements(const T& container, Predicate pred) { //pred is some function declared.
        int count = 0;
        for(const auto& elem : container) {
            if(pred(elem)) {
                count++;
            }
        }
        return count;
    }
    
    template<typename T>
    void myPrint(T lObj) {
        std::cout << lObj << " ";
    }
    extern void someFuncC02();
    
    //Variadic templates
    template<typename T, typename... Tail>
    void someFuncC02(T head, Tail... tail) {
        myPrint(head);      //do something to head
        someFuncC02(tail...);   //try again with tail.
    }
    
    template<typename T>
    void printContainer(T container) {
        std::copy(container.begin(), container.end(), std::ostream_iterator<decltype(*std::begin(container))>(std::cout, " "));
        std::cout << std::endl;
    }
    template<typename T>
    void printContainer(T container, const std::string& info) {
        std::cout << info << ": ";
        std::copy(container.begin(), container.end(), std::ostream_iterator<decltype(*std::begin(container))>(std::cout, " "));
        std::cout << std::endl;
    }
    
    extern void printLog(const std::string& msg);
    extern void printNewLine();
    
    extern void openFileForWriting(const std::string& filePath, std::ofstream& myFile);
    extern void closeWritingFile(std::ofstream& myFile);
    
    extern void openFileForReading(const std::string& filePath, std::ifstream& myFile);
    extern void closeReadingFile(std::ifstream& myFile);
}

#endif /* USEFULFUNCTIONS_H */

