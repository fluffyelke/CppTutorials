/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

//#include "C13Vector.h"
//#include "../../../utils/UsefulFunctions.h"
//
//#include <iterator>
//#include <vector>
//#include <algorithm>
//#include <deque>

namespace C13VectorEx {
    
    // Base Class
//    template<class T, class Alloc>
//    C13BaseVector<T, Alloc>::C13BaseVector(C13BaseVector&& obj) 
//        : alloc{obj.alloc},
//          data{obj.data},
//          space{obj.space},
//          last{obj.last} {
//              // no longer owns any memory
//              obj.data = nullptr;
//              obj.space = nullptr;
//              obj.last = nullptr;
//    }
//    
//    template<class T, class Alloc>
//    C13BaseVector<T, Alloc>& C13BaseVector<T, Alloc>::operator = (C13BaseVector&& obj) {
//        std::swap(*this, obj);
//        return *this;
//    }
//    
//    
//    // Constructor
//    template<class T, class Alloc>
//    C13Vector<T, Alloc>::C13Vector(size_type n, const T& val, const Alloc& a) 
//        : baseVector{a, n} {
//
//        std::uninitialized_fill(baseVector.data, baseVector.data + n, val);   // copy elements
//
//    }
    //Destructor
//    template<class T, class Alloc>
//    C13Vector<T, Alloc>::~C13Vector() {
//        destroy_elements();
//    }
        
    // Copy Constructor
//    template<class T, class Alloc>
//    C13Vector<T, Alloc>::C13Vector(const C13Vector<T, Alloc>& obj) 
//        : baseVector {obj.alloc, obj.size()}{
//        std::uninitialized_copy(obj.begin(), obj.end(), baseVector.data);
//    }    
//    
//    // assignment operator
//    template<class T, class Alloc>
//    C13Vector<T, Alloc>& C13Vector<T, Alloc>::operator = (const C13Vector& obj) {   //offers the strong guarantee
//        
//        if(capacity() < obj.size()) {
//            C13Vector temp{obj};    // copy allocator
//            std::swap(*this, temp); // swap representation
//            return *this;
//        }
//        
//        if(this == &obj) {      // optimize self assignment
//            return *this;
//        }
//        size_type sz = size();
//        size_type objSz = obj.size();
//        baseVector.alloc = obj.baseVector.alloc;    // copy the allocator
//        
//        if(objSz <= sz) {
//            std::copy(obj.begin(), obj.begin() + objSz, baseVector.data);
//            for(T* currElem = baseVector.data; currElem != baseVector.space; ++currElem) {
//                currElem->~T();         // destroy element
//            }
//        }
//        else {
//            std::copy(obj.begin(), obj.begin() + sz, baseVector.data);
//            std::uninitialized_copy(obj.begin() + sz, obj.end(), baseVector.data);
//        }
//        baseVector.space = baseVector.data + objSz;
//        return *this;
//    }
//    
//    // move constructor
//    template<class T, class Alloc>
//    C13Vector<T, Alloc>::C13Vector(C13Vector&& obj) 
//        : baseVector{std::move(obj.baseVector)}  {
//    }
//    
//    // move assignment operator
//    template<class T, class Alloc>
//    C13Vector<T, Alloc>& C13Vector<T, Alloc>::operator = (C13Vector&& obj) 
//    {
//        clear();                // destroy elements
//        std::swap(*this, obj);  // transfer ownership
//    }
//        
//    
//    template<class T, class Alloc>
//    void C13Vector<T, Alloc>::reserve(size_type newalloc) {
//        
//        if(newalloc <= capacity()) {    // never decrease allocation.
//            return;
//        }
//        C13BaseVector<T, Alloc> newVec{baseVector.alloc, newalloc}; //get new space
//        Utils::uninitialized_move(baseVector.data, baseVector.data + size(), newVec.data);       //there is std::uninitialized_move in c++17
//    }
//    
//    template<class T, class Alloc>
//    void C13Vector<T, Alloc>::resize(size_type newSize, const T& val) {
//        reserve(newSize);
//        if(size() < newSize) {
//            std::uninitialized_fill(baseVector.data + size(), baseVector.data + newSize, val);  // construct new elements: [size():newSize)
//        }
//        else {
//            destroy(baseVector.data, baseVector.data + newSize);
//        }
//        baseVector.space = baseVector.last = baseVector.data + newSize;
//    }
//    
//    template<class T, class Alloc>
//    void C13Vector<T, Alloc>::clear() {
//        resize(0);  
//    }
    
//    template<class T, class Alloc>
//    void C13Vector<T, Alloc>::destroy_elements() {
//        for(T* currElem = baseVector.data; currElem != baseVector.space; ++currElem) {
//            currElem->~T();         // destroy element
//        }
//        baseVector.space = baseVector.data;
//    }
    
//    template<class T, class Alloc>
//    void C13Vector<T, Alloc>::push_back(const T& elem) {
//        if(capacity() == size()) {  //no more free space reallocate
//            reserve(baseVector.space ? baseVector.space * 2 : 8);       //grow or start with 8
//        }
//        baseVector.alloc.construct(&baseVector.data[size()], elem);
//        ++baseVector.space;
//    }
//    
//    //Helper Method
//    template<typename In>
//    void destroy(In b, In e) {
//        for(; b != e; ++b) {    //destroy [b:e)
//            b->~In();
//        }
//    }
}