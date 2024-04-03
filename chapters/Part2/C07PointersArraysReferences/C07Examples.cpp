/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>

#include "C07Examples.h"

namespace C07 {
    void arraySubscriptionExample() {
        int arr[] = {1, 2, 3, 4, 5, 6};
        int a = arr[5];
        std::cout << a << std::endl;
        a = *(&arr[0] + 5);
        std::cout << a << std::endl;
        a = *(arr + 5);
        std::cout << a << std::endl;
        a = *(5 + arr);
        std::cout << a << std::endl;
        a = 5[arr];
        std::cout << a << std::endl;
    }
}