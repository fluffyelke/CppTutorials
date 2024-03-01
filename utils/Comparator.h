/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   Comparator.h
 * Author: default
 *
 * Created on February 28, 2024, 12:13 PM
 */

#ifndef COMPARATOR_H
#define COMPARATOR_H

template<typename T>
class Comparator {
    const T obj;
    public:
        Comparator(const T& lObj) 
            : obj{lObj} {
            
        }
        
        bool operator () (const T& lObj) {
            return lObj < obj;      //operator   ' < ' must be defined for the T class.
        }
        
};

#endif /* COMPARATOR_H */

