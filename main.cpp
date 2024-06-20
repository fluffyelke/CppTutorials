/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "AllExamples.h"
#include "chapters/Part2/C12Functions/C12Excercises.h"
#include <sstream>
#include <limits>
#include <map>
#include <utility>
/* 
 * File:   main.cpp
 * Author: default
 *
 * Created on February 7, 2024, 12:29 PM
 */

void chessFigures() {
    std::cout << "Character: \u2654" << std::endl;
    std::cout << "Character: \u2655" << std::endl;
    std::cout << "Character: \u2656" << std::endl;
    std::cout << "Character: \u2657" << std::endl;
    std::cout << "Character: \u2658" << std::endl;
    std::cout << "Character: \u2659" << std::endl;
    std::cout << "Character: \u265a" << std::endl;
    std::cout << "Character: \u265b" << std::endl;
    std::cout << "Character: \u265c" << std::endl;
    std::cout << "Character: \u265d" << std::endl;
    std::cout << "Character: \u265e" << std::endl;
    std::cout << "Character: \u265f" << std::endl;
}

void AppendStringToText() {
    std::stringstream result;
    std::ifstream origFile;
    origFile.open("sf_localization.csv");
    std::fstream spainFile;
    spainFile.open("sf_localization1.csv");
    std::string currLine{};
    std::string spainLine{};
    int line = 1;

    std::vector<std::string> originalFileVec;
    std::vector<std::string> spainFileVec;
    std::vector<std::string> fileCSVOrig;
    std::vector<std::pair<std::string, std::string>> vecOfStringsOrig;
    std::vector<std::pair<std::string, std::string>> vecOfNewCSV;
    
    std::string mapKey = "";
    while(std::getline(origFile, currLine)) {
        vecOfStringsOrig.emplace_back();
        std::size_t keepStrPos = 0;
        if(!currLine.empty() && currLine.at(0) != ',') {
            
            std::size_t found = currLine.find_first_of(",");
            mapKey = "";
            if(found) {
                for(std::size_t i = found + 1; i != currLine.find_first_of(",", found + 1); ++i){
                    if(i >= currLine.size()) {
                        break;
                    }
                    mapKey += currLine[i];
                }
            }
            keepStrPos = currLine.find_last_of(",");
            vecOfStringsOrig.back().first = mapKey;
            vecOfStringsOrig.back().second = currLine.substr(0, keepStrPos + 1);
        }
        else {
            vecOfStringsOrig.back().first = "";
            vecOfStringsOrig.back().second = ",,,";
        }
        line++;
    }

//    for(auto elem : vecOfStringsOrig) {
//        std::cout << elem.first << ": " << elem.second << std::endl;
//    }
    
    std::size_t finalPosStr = 0;
    mapKey = "";
    while(std::getline(spainFile, currLine)) {
        mapKey = "";
        vecOfNewCSV.emplace_back();
        if(!currLine.empty() && currLine.at(0) != ',') {
            int index = 0;
            mapKey += currLine.at(index);
            index++;
            while(currLine.at(index) != '"') {
                mapKey += currLine.at(index);
                index++;
            }
            mapKey += "\"";
            finalPosStr = index;
            vecOfNewCSV.back().first = mapKey;
            vecOfNewCSV.back().second = currLine.substr(finalPosStr+2, currLine.size());
        }
        mapKey = "";
        line++;
    }
//    for(auto elem : vecOfNewCSV) {
//        std::cout << elem.first << ": " << elem.second << std::endl;
//    }
    
    std::ofstream fileToFinalResult;
    fileToFinalResult.open("files/sf_localization.csv");
    
    int currElem = 0;
    int count = 0;
    std::string finalResult{};
    bool addEndOfLine = true;
    for(int i = 0; i < vecOfStringsOrig.size(); ++i) {
        addEndOfLine = true;
        finalResult = vecOfStringsOrig.at(i).second;
//        std::cout << finalResult << std::endl;
        for(int j = currElem; j < vecOfNewCSV.size(); ++j) {
            if(vecOfStringsOrig.at(i).first == vecOfNewCSV.at(j).first) {
                addEndOfLine = false;
                finalResult += vecOfNewCSV.at(j).second + "\n";
//                std::cout << vecOfNewCSV.at(j).second << std::endl;
                currElem++;
//                count++;
                break;
            }
        }
        if(addEndOfLine) {
            finalResult += "\n";
        }
        fileToFinalResult << finalResult;
    }
    fileToFinalResult.close();
//    std::cout << count << std::endl;
}

int main(int argc, char** argv) {

//    part01Basics();
//    part02Abstractions();

//    Examples::part01Containers();
//    Examples::testConcurencyAndUtilities();
//    Examples::examplesC06TypesAndDeclarations();
//    Examples::examplesC07();
//    Examples::examplesC08();
//    Examples::examplesC09Statements();
//    Examples::examplesC10Expressions();
//    Examples::examplesC11SelectOperations();
//    Examples::examplesC12Functions();
//    C12::ex04ConCatCommandLineFiles(argc, argv);
//    Examples::examplesC13Exceptions();
//    Examples::examplesC16Classes();
//    Examples::c17Examples();

    AppendStringToText();
    
    return 0;
}

