/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   ContainersExamples.h
 * Author: default
 *
 * Created on February 15, 2024, 1:44 PM
 */

#ifndef CONTAINERSEXAMPLES_H
#define CONTAINERSEXAMPLES_H

#include <istream>

#include "C03Vector.h"
#include "IContainer.h"


namespace C03 {
    extern C03::C03Vector readFrom(std::istream& is);
    extern void useContainer(IContainer& obj);
}

#endif /* CONTAINERSEXAMPLES_H */

