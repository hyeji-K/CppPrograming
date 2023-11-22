//
//  IntArray1.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/22.
//

#ifndef IntArray1_hpp
#define IntArray1_hpp

#include <iostream>
#include <exception>
using namespace std;

const int DefaultSize = 10;
class Array {
    int *buf;
    int size;
public:
    Array(int s = DefaultSize);
    virtual ~Array() { delete[] buf; }
    int& operator[](int offset);
    const int& operator[](int offset) const;
    int getsize() const { return size; }
    friend ostream& operator<<(ostream&, Array&);
    class BadIndex {}; // exception class
    
    // exception 클래스
//    class BadIndex : public exception {
//    public:
//        int wrongIndex;
//        BadIndex(int n) : wrongIndex(n), exception() {}
//        const char* what() const { return "Array Exception::"; }
//    };
};

#endif /* IntArray1_hpp */
