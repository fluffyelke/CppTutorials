/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include "C12Excercises.h"


namespace C12 {
    
    void ex01(char* cPtr, int& refInt) {
        std::cout << (int)*cPtr << " : " << refInt << std::endl;
    }
//    void(*ptrToFunc)(char*, int&) {
//        
//    }
    
    void(*ptrToFunc)(char*, int&);
    
    void myExtendedFunc(void(*func)(char*, int&), char c, int intRef) {
        func(&c, intRef);
    }
    
    using returnFuncPtr = void(*)(char*, int&);
    returnFuncPtr returnFunc() {
        return &ex01;
    }
    void ex01Result() {
        char c = 'a';
        int myInt = 500;
        ex01(&c, myInt);
        
        ptrToFunc = &ex01;
        c = 'b';
        myInt = 501;
        ptrToFunc(&c, myInt);
        
        c = 'c';
        myInt = 502;
        myExtendedFunc(ptrToFunc, c, myInt);
        
        c = 'd';
        myInt = 503;
        auto myReturnFunc = returnFunc();
        myReturnFunc(&c, myInt);
    }
    void ex03PrintCommandLine(int elementCount, char** arr) {
        std::string programPath{arr[0]};
        std::cout << "Program path is the first command line element: " << programPath << std::endl;
        std::cout << elementCount << std::endl;
        std::string msg = "Hello";
        for(int i = 1; i < elementCount; ++i) {
            std::cout << msg << " ";
            for(int j = 0; j < strlen(arr[i]); j++) {
                std::cout << arr[i][j];
            }
            std::cout << " !" << std::endl;
        }
    }
    void ex04ConCatCommandLineFiles(int elementCount, char** arr) {
        /** put those paths in the project properties/run after "{@OUTPUT_PATH}" for set command line arguments.
         * /home/default/Projects/MyProjects/cpp/Bjarne/files/file1.txt 
         * /home/default/Projects/MyProjects/cpp/Bjarne/files/file2.txt 
         * /home/default/Projects/MyProjects/cpp/Bjarne/files/file3.txt
         */
        std::string programPath{arr[0]};
        std::cout << "Program path is the first command line element: " << programPath << std::endl;
        std::ifstream file;
        std::stringstream ss;
        for(int i = 1; i < elementCount; ++i) {
            for(int j = 0; j < strlen(arr[i]); j++) {
                programPath = "";
                programPath = arr[i];
                file.open(programPath);
                ss << file.rdbuf();
            }
        }
        std::cout << ss.str();
    }
    
    TNode* newNode(std::string value) {
        TNode* node = new TNode;
        node->count++;
        node->word = value;
        node->left = nullptr;
        node->right = nullptr;
        return node;
    }
    void preorderTraversal(TNode* root) {
        if(root == nullptr){
            return;
        }
        std::cout << root->word << std::endl;
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
    }
    void postOrderTraversal(TNode* root) {
        if(root == nullptr){
            return;
        }
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        std::cout << root->word << std::endl;
        
    }
    void inOrderTraversal(TNode* root) {
        if(root == nullptr){
            return;
        }
        inOrderTraversal(root->left);
        std::cout << root->word << std::endl;
        inOrderTraversal(root->right);
    }
    void ex08() {
        TNode* head = newNode("Head");
        head->left = newNode("Left");
        head->right = newNode("Right");
        head->left->left = newNode("LeftLeft");
        head->left->right = newNode("LeftRight");
        head->right->left = newNode("RightLeft");
        head->right->right = newNode("RightRight");
        inOrderTraversal(head);
    }
    
    void revertTwoDimmArray(int arr[][5], int size) {
        for(int i = 0; i < 3; ++i) {
            for(int j = 0; j < 5 / 2; ++j) {
                int temp = arr[i][j];
                arr[i][j] = arr[i][4 - j];
                arr[i][4 - j] = temp;
            }
        }
    }
    
    void ex09RevertArray() {
        int arr[3][5] = {
            {1, 2, 3, 4, 5}, 
            {1, 2, 3, 4, 5},
            {1, 2, 3, 4, 5},
        };
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 5; j++) {
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
        revertTwoDimmArray(arr, 5);
        
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 5; j++) {
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    
}