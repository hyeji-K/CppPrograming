//
//  Person.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/09.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

// 사람을 나타내는 클래스를 선언하고자 한다. 사람 객체는 '...에 사는 ...입니다.'라고 자신을 알릴 수 있으며, 주소를 변경할 수 있다.
class Person {
    char* name; // 이름을 저장하는 데이터멤버
    char* addr; // 주소를 저장하는 데이터멤버
public:
    Person(const char* name, const char* addr); // 생성자
    ~Person(); // 소멸자
    void print() const; // 이름과 주소 출력
    void chAddr(const char* newAddr); // 주소 변경
};

#endif /* Person_hpp */
