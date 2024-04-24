/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   C12Excercises.h
 * Author: default
 *
 * Created on April 9, 2024, 10:00 AM
 */

#ifndef C12EXCERCISES_H
#define C12EXCERCISES_H

namespace C12 {
    
    extern void ex01(char* cPtr, int& refInt);

//    extern void myFunc(ptrToFunc*);
//    extern ptrToFunc returnFunc();
//    extern ptrToFunc result(ptrToFunc)
    extern void ex01Result();
    extern void ex03PrintCommandLine(int elementCount, char** arr);
    extern void ex04ConCatCommandLineFiles(int elementCount, char** arr);
    
    
    extern void ex08();
    
    struct TNode {
        std::string word;
        int count;
        TNode* left;
        TNode* right;
    };
    extern void addNode(TNode* currNode, std::string value);
    extern void preorderTraversal2();
    extern void inOrderTraversal();
    extern void postOrderTraversal();
    
    extern void revertTwoDimmArray(int arr[][5], int size);
    extern void ex09RevertArray();
}

#endif /* C12EXCERCISES_H */

