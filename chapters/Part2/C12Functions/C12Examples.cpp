/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <vector>
#include "../../../utils/UsefulFunctions.h"
#include "../../../utils/UsefulMacros.h"

namespace C12 {
    void testIota() {
        PRINT_LOG();
        ERROR(SHOULD NOT ENTER HERE);
        std::vector<int> myVec(10);
        
        Utils::myIota(myVec.begin(), myVec.end(), 15);
        Utils::printContainer(myVec, "vector: ");
    }
}