//
//  Sbinding.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#include <iostream>
#include "Person1.hpp"
#include "Student1.hpp"
using namespace std;

int main()
{
    Person *p1 = new Person("Dudley");
    p1->print();
    cout << endl;
    Person *p2 = new Student("Harry", "Hogwarts");
    p2->print(); cout << endl;
    ((Student *)p2)->print(); // 위험! p2가 Student 객체를 가리키고 있으리라는 보장이 없음
    cout << endl;
    return 0;
}

