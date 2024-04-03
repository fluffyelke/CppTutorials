/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C08Examples.h
 * Author: default
 *
 * Created on March 5, 2024, 4:07 PM
 */

#ifndef C08EXAMPLES_H
#define C08EXAMPLES_H

namespace C08 {
    struct Address {
        const char* name;   // "Jim Dandy"
        int number;         // 61
        const char* street; // "South st"
        const char* town;   // "New Providence"
        char state[2];      // 'N' 'J'
        const char* zip;    // "07974"
    };
    
    extern void testAddress1();
    extern void printAddress(Address* obj);
    extern void printAddress(const Address& obj);
}

#endif /* C08EXAMPLES_H */

