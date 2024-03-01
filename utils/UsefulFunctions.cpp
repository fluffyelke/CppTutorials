/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */
#include "UsefulFunctions.h"

namespace Utils {
    
    
    
    void someFuncC02() {

    }
    
    
    void printLog(const std::string& msg) {
        std::cout << msg << std::endl;
    }
    void printNewLine() {
        std::cout << std::endl;
    }
    
    void openFileForWriting(const std::string& filePath, std::ofstream& myFile) {
        myFile.open(filePath);
        if(!myFile.is_open()) {
            printLog("Unable to load file: ");
            printLog(filePath);
        }
    }
    void closeWritingFile(std::ofstream& myFile) {
        if(myFile.is_open()) {
            myFile.close();
        }
    }
    
    void openFileForReading(const std::string& filePath, std::ifstream& myFile) {
        myFile.open(filePath);
        if(!myFile.is_open()) {
            printLog("Unable to load file: ");
            printLog(filePath);
        }
    }
    void closeReadingFile(std::ifstream& myFile) {
        if(myFile.is_open()) {
            myFile.close();
        }
    }
}