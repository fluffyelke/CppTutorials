/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include "C10Excercises.h"
#include <map>
#include <string>
#include <iostream>
#include <cstring>
#include <list>
#include <vector>
#include <algorithm>

namespace C10 {
    void nameValueSeqenceEx02() {
        std::string name{};
        double value{};
        
        std::map<std::string, std::vector<std::pair<int, double>>> myTable;

        while(true) {
            
            std::cout << "Input name and value or 'quit' for name to exit: ";
            std::cin >> name >> value;
            std::cout << std::endl;
            
            if(name == "quit") {
                break;
            }
            auto it = myTable.find(name);
            if(it != myTable.end()) {
                it->second.emplace_back(it->second.size() + 1, value);
            }
            else {
                myTable[name] = {std::make_pair(1, value)};
            }  
            
        }
        
        for(auto& pairElem : myTable) {
            std::cout << pairElem.first << std::endl;
            for(auto& elem : pairElem.second) {
                std::cout << '\t' <<elem.first << ": value: " << elem.second << std::endl; 
            }
        }

        std::cout << "Mean For Each Name: " << std::endl;
        for(auto& pairElem : myTable) {
            std::cout << pairElem.first << " mean sum: ";
            double sum = 0;
            for(auto& elem : pairElem.second) {
                sum += elem.second;
            }
            std::cout << (sum / pairElem.second.size()) << std::endl;
        }
        
        std::cout << "Mean For All Names: ";
        int totalCount = 0;
        double totalSum = 0;
        for(auto& pairElem : myTable) {
            double sum = 0;
            for(auto& elem : pairElem.second) {
                sum += elem.second;
            }
            totalCount += pairElem.second.size();
            totalSum += sum;
        }
        std::cout << (totalSum / totalCount) << std::endl;
        printMedianValue(myTable);
    }
    
    int myStrLen(const char* arr) {
        int count = 0;
        while(*arr++) {
            count++;
        }
        return count;
    }
    void myStrCpy(const char* from, char* to) {
        int length = myStrLen(from);
        for(int i = 0; i < length; ++i) {
            to[i] = from[i];
        }
        std::cout << "222" << std::endl;
    }
    int myStrCmp(const char* left, const char* right) {
        while(*left || *right){
            if(*left != *right) {
                std::cout << (int)*left << " " << (int)*right << std::endl;
                if(*left > *right) {
                    return 1;
                }
                else {
                    return -1;
                }
            }
            left++;
            right++;
        }
        return 0;
    }
    char* myConCat(const char* first, const char* second) {
        char* result;
        int length = myStrLen(first) + myStrLen(second);
        result = new char[length];
        length = 0;
        for(int i = 0; i < myStrLen(first); ++i) {
            result[length++] = first[i];
        }
        for(int i = 0; i < myStrLen(second); ++i) {
            result[length++] = second[i];
        }
        return result;
    }
    
    void myReverse(char arr[]) {
        for(int i = 0; i < myStrLen(arr) / 2; i++) {
            char temp = arr[i];
            arr[i] = arr[myStrLen(arr) - i - 1];
            arr[myStrLen(arr) - i - 1] = temp;
        }
    }
    
    void testEx07() {
        const char* myArr = "kjhsdfaksfdwoehfsdf";
        std::cout << "myStrLen: " << myStrLen(myArr) << std::endl;
        std::cout << "strlen(): " << strlen(myArr) << std::endl;
        
        char* newArr = new char[myStrLen(myArr)];
        myStrCpy(myArr, newArr);
        for(int i = 0; i < myStrLen(newArr); ++i) {
            std::cout << newArr[i];
        }
        std::cout << std::endl;
        delete [] newArr;
    }
    void testCmpEx07() {
        const char* left = "asdgsd";
        const char* right = "asdgsdgaasdfafasdgs";
        std::cout << "Compare: " << myStrCmp(left, right) << std::endl;
    }
    void printMedianValue(std::map<std::string, std::vector<std::pair<int, double>>>& obj) {
        std::vector<double> values;
        for(auto& pairElem : obj) {
            for(auto& elem : pairElem.second) {
                values.emplace_back(elem.second);
            }
        }
        std::sort(values.begin(), values.end());
        for(auto& elem : values) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
        int median = values.size() / 2;
        std::cout << "Median Value of the collection is: " << values[median] << std::endl;
    }
    
    
    void testMyConCatE09() {
        char* res;
        const char* first = "Hello";
        const char* second = " World";
        res = myConCat(first, second);
        for(int i = 0; i < myStrLen(res); ++i){
            std::cout << res[i];
        }
        std::cout << std::endl;
        delete [] res;
    }
    
    void testReverseE10() {
        char arr[] = "abcde";
        std::cout << "Before" << std::endl;
        for(int i = 0; i < myStrLen(arr); ++i) {
            std::cout << arr[i];
        }
        std::cout << std::endl;
        std::cout << "After" << std::endl;
        myReverse(arr);
        for(int i = 0; i < myStrLen(arr); ++i) {
            std::cout << arr[i];
        }
        std::cout << std::endl;
        
    }
    
    void reverseCArray() {
        char arr[] = "abcde";
        for(int i = 0; i < strlen(arr) / 2; ++i) {
            char temp = arr[i];
            arr[i] = arr[strlen(arr) - 1 - i];
            arr[strlen(arr) - 1 - i] = temp;
        }
    }
    
}