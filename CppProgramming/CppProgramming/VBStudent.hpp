//
//  VBStudent.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef VBStudent_hpp
#define VBStudent_hpp

#include "VBPerson.hpp"
using namespace std;

class Student : virtual public Person {
    string school;
public:
    Student(const string& n, const string& s) : Person(n), school(s) {}
    void print() const {
        Person::print();
        cout << " goes to " << school << endl;
    }
};

#endif /* VBStudent_hpp */
