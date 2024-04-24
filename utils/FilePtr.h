/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   FilePtr.h
 * Author: default
 *
 * Created on April 16, 2024, 3:19 PM
 */

#ifndef FILEPTR_H
#define FILEPTR_H

#include <string>

namespace Utils {
    class FilePtr {
        FILE* myFile;
    public:
        FilePtr(const char* filePath, const char* flags);
        FilePtr(const std::string& filePath, const char* flags);
        explicit FilePtr(FILE* fPtr);
        ~FilePtr();
        //suitable move and copy operations
        
        operator FILE* () ;
    };
}

#endif /* FILEPTR_H */

