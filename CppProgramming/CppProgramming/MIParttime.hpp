//
//  MIParttime.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef MIParttime_hpp
#define MIParttime_hpp

#include <string>
#include "MIStudent.hpp"
#include "MIEmployee.hpp"
using namespace std;

class Parttime : public Student, public Employee {
public:
    Parttime(const string& s, const string& c) : Student(s), Employee(c) {}
};

#endif /* MIParttime_hpp */
