//
//  Student1.cpp
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
//    Person dudley;
//    dudley.setName("Dudley");
//    Student harry;
//    harry.setName("Harry");
//    harry.setSchool("Hogwarts");
//    dudley.print();
//    cout << endl;
//    harry.print();
//    cout << endl;
//    harry.Person::print();
//    cout << endl;
    
    // 생성자와 소멸자 추가 
    Student harry("Harry", "Hogwarts");
    cout << harry.getName() << " goes to " << harry.getSchool() << endl;
    
    return 0;
}
