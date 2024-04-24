/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <cstdio>
#include <stdexcept>
#include "FilePtr.h"
#include "UsefulFunctions.h"


namespace Utils {
    FilePtr::FilePtr(const char* filePath, const char* flags) 
        : myFile{fopen(filePath, flags)} {
        
        if(myFile == nullptr) {
            throw std::runtime_error{"FilePtr(): Cant open file"};
        }
        Utils::printLog("FilePtr::FilePtr(const char* filePath, const char* flags)");
        Utils::printLog(filePath);
        Utils::printLog("Created");
    }
        
    FilePtr::FilePtr(const std::string& filePath, const char* flags) 
        : myFile{fopen(filePath.c_str(), flags)} {
        Utils::printLog("FilePtr::FilePtr(const std::string& filePath, const char* flags)");
        Utils::printLog(filePath);
        Utils::printLog("Created");
    }
        
    FilePtr::FilePtr(FILE* fPtr) 
        : myFile{fPtr} {
        if(myFile == nullptr) {
            throw std::runtime_error{"FilePtr: nullptr"};
        }
        Utils::printLog("explicit FilePtr::FilePtr(FILE* fPtr)");
        Utils::printLog("Created");
    }
        
    FilePtr::~FilePtr() {
        Utils::printLog("~FilePtr() Destroyed");
        fclose(myFile);
    }
    FilePtr::operator FILE* () {
        return myFile;
    }
}