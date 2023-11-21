//
//  VBPerson.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef VBPerson_hpp
#define VBPerson_hpp

#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
public:
    Person(const string &n) : name(n) {}
    virtual ~Person() {}
    virtual void print() const { cout << name; }
};
#endif /* VBPerson_hpp */
