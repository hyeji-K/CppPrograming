//
//  VBSParttime.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef VBSParttime_hpp
#define VBSParttime_hpp

#include "VBStudent.hpp"
#include "VBEmployee.hpp"

class Parttime : public Student, public Employee {
public:
    Parttime(const string& n, const string& s, const string& c) : Person(n), Student(n, s), Employee(n, c) {}
    void print() const {
        Student::print();
        Employee::print();
    }
};

#endif /* VBSParttime_hpp */
