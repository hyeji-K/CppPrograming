//
//  Student1.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef Student1_hpp
#define Student1_hpp

#include <stdio.h>
#include "Person1.hpp"

class Student : public Person {
    string school;
public:
    Student(const string& n, const string& s) : Person(n) {
        cout << "Student의 생성자" << endl;
        school = s;
    }
    ~Student() {
        cout << "Student의 소멸자" << endl;
    }
//    void setSchool(string s) { school = s; }
    string getSchool() const { return school; }
    void print() const {
        Person::print();
        cout << " goes to " << school;
    }
};

#endif /* Student1_hpp */
