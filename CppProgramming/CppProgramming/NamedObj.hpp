//
//  NamedObj.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/10.
//

#ifndef NamedObj_hpp
#define NamedObj_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
// 이름을 갖는 객체를 만들 수 있는 클래스를 정의하고자 한다. 객체가 생성될 때 고유번호를 가지게 되는데, 이 번호는 NamedObj 객체가 생성됨에 따라 1번부터 시작하여 차례로 부여되는 일련번호이다. 객체는 자기 자신의 일련번호와 이름을 출력할 수 있으며, 현재 존재하는 NamedObj 클래스의 객체 수를 구할 수 있다.
class NamedObj {
    char* name;
    int id;
    // static 데이터 멤버
    static int nConstr; // 생성된 객체 수
    static int nDestr;  // 소멸된 객체 수
public:
    NamedObj(const char* s);
    ~NamedObj();
    void display() const {
        cout << "ID : " << id << " --> 이름 : " << name << endl;
    }
    static int nObj() { // static 멤버함수: 존재하는 객체 수 반환
        return nConstr - nDestr;
    }
};
#endif /* NamedObj_hpp */
