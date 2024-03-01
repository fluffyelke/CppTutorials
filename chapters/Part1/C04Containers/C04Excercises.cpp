/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <string>
#include <iostream>
#include <vector>
#include "../../../utils/ImprovedSTD.h"
#include "../../../utils/UsefulFunctions.h"
#include "C04Excercises.h"


namespace C04 {
    void printNameAndAgeEx05() {
        std::string name{};
        int age;
        std::cin >> name >> age;
        std::cout << "Name: " << name << ", age: " << age << std::endl;
    }
    
    std::ostream& operator << (std::ostream& os, const PersonC04& obj) {
        os << "Name: " << obj.name << ", age: " << obj.age; 
        return os;
    }
    std::istream& operator >> (std::istream& is, PersonC04& obj) {
        is >> obj.name >> obj.age;
        return is;
    }
    
    void sortAVectorE07() {
        std::vector<int> myVec = {
            5, 9, -1, 200, 0
        };
        Utils::printLog("Before Sort");
        Utils::myPrint("Print");
        Utils::printContainer(myVec);
        std::cout << std::endl;
        MySTD::sort(myVec);
        Utils::printContainer(myVec);
        std::cout << std::endl;
    }
    void sortStringVectorE08() {
        std::vector<std::string> myVec = {
          "Kant", "Plato", "Aristotle", "Kierkegard", "Hume",  
        };
        Utils::printLog("Before Sort");
        std::copy(myVec.begin(), myVec.end(), std::ostream_iterator<std::string>(std::cout, " "));
        MySTD::sort(myVec);
        Utils::printNewLine();
        Utils::printLog("After Sort");
        std::copy(myVec.begin(), myVec.end(), std::ostream_iterator<std::string>(std::cout, " "));
        Utils::printNewLine();
    }
    void writeIntegersE09() {
        std::ofstream myFile;
        Utils::openFileForWriting("chapters/files/Part01/writeIntegers.txt", myFile);
        std::vector<int> myVec;
        for(int i = 1; i <= 100; ++i) {
            int number = rand() % 90 + 10;
            myVec.emplace_back(number);
        }
        int count = 0;
        for(auto& elem : myVec) { 
            myFile << elem << " ";
            count++;
            if(count % 10 == 0) {
                myFile << '\n';
            }
        }
        Utils::closeWritingFile(myFile);
    }
    void readIntegersE10() {
        std::ifstream myFile;
        Utils::openFileForReading("chapters/files/Part01/writeIntegers.txt", myFile);
        std::cout << myFile.rdbuf() << std::endl;
        Utils::closeReadingFile(myFile);
    }
}