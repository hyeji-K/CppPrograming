//
//  MIEmployee.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef MIEmployee_hpp
#define MIEmployee_hpp

#include <iostream>
#include <string>
using namespace std;

class Employee {
    string company;
public:
    Employee(const string& s) : company(s) {}
    void printCompany() const { cout << company << endl; }
};

#endif /* MIEmployee_hpp */
