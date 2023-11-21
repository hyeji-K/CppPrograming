//
//  VBEmployee.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef VBEmployee_hpp
#define VBEmployee_hpp

#include "VBPerson.hpp"
using namespace std;

class Employee : virtual public Person {
    string company;
public:
    Employee(const string& n, const string& s) : Person(n), company(s) {}
    void print() const {
        Person::print();
        cout << " is employed by " << company << endl;
    }
};

#endif /* VBEmployee_hpp */
