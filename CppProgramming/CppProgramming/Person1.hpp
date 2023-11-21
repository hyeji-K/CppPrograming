//
//  Person1.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef Person1_hpp
#define Person1_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Person {
    string name;
public:
    Person(const string& n) {
        cout << "Person의 생성자" << endl;
        name = n;
    }
    ~Person() {
        cout << "Person의 소멸자" << endl;
    }
//    void setName(const string& n) { name = n; }
    string getName() const { return name; }
    void print() const { cout << name; }
};

#endif /* Person1_hpp */
