/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   IContainer.h
 * Author: default
 *
 * Created on February 15, 2024, 3:06 PM
 */

#ifndef ICONTAINER_H
#define ICONTAINER_H

namespace C03 {
    class IContainer {
    public:
        virtual double& operator [] (int) = 0;
        virtual int getSize() const = 0;
        virtual ~IContainer() {}
    };
}

#endif /* ICONTAINER_H */

