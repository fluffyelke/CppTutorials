/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <algorithm>
#include <iostream>
#include <cstring>

#include "C07Excercises.h"

namespace C07 {
    void ex01() {
        char c = 'a';
        char* ptrC = &c;
        
        int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int (&arrRef)[10] = arr;    //reference to an array of 10 elements
        
        
        char charArr[] = "123456";
        char* ptrToCharArr = charArr;
        
        char* ptrToPtr = ptrC;
        
        const int num = 0;
        const int* ptrToNum = &num;
        int const* constPtrToNum = &num;
    }
    
    void ex03() {
        using unChar = unsigned char;
        using cnstUnChar = const unChar;
        using ptrToInt = int*;
        using ptrToChar = char*;
        using ptrToPtrChar = ptrToChar*;
        using ptrToArrayOfChar = char*[];
        using arrToIntArr = int*[7];
        using eightArraysTo7ptrsToInts = arrToIntArr[8];
    }
    void ex04() {
        char arr[] = {"What the fuck are you talking about man..."};
        int arrInt[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        std::cout << "chars: " << distance(&arr[17], &arr[15]);
        std::cout << std::endl;
        std::cout << "ints: " << distance(&arrInt[0], &arrInt[5]);
        std::cout << std::endl;
    }
    void swap(int* left, int* right) {
        int temp = *left;
        *left = *right;
        *right = temp;
    }
    void swap(int& left, int& right) {
        int temp = left;
        left = right;
        right = temp;
    }
    void testLengthEx08() {
        char arr[] = "a short string";
        auto strSize = [](char* arr) -> int{
            int count = 0;
            while(*arr != '\0') {
                std::cout << *arr << std::endl;
                count++;
                *arr++;
            }
            return count;
        };
        std::cout << "Size of str: " << strSize(arr) << std::endl;
        std::cout << "Length of str: "<< strlen(arr) << std::endl;
    }
}