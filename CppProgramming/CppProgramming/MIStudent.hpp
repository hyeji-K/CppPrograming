//
//  MIStudent.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef MIStudent_hpp
#define MIStudent_hpp

#include <iostream>
#include <string>
using namespace std;

class Student {
    string school;
public:
    Student(const string& s) : school(s) {}
    void printSchool() const { cout << school << endl; }
};

#endif /* MIStudent_hpp */
