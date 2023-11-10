//
//  NamedObj.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/10.
//

#include "NamedObj.hpp"
#include <iostream>

NamedObj::NamedObj(const char* s)
{
    name = new char[strlen(s)+1];
    strcpy(name, s);
    id = ++nConstr;
}

NamedObj::~NamedObj()
{
    ++nDestr;
    delete [] name;
}

// static 데이터 멤버의 정의 및 초기화
int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;

void f()
{
    NamedObj x{"Third"};
    x.display();
}

int main()
{
    cout << "NamedObj 클래수의 객체 수 : " << NamedObj::nObj() << endl;
    NamedObj a("First");
    NamedObj b("Second");
    f();
    NamedObj c("Fourth");
    c.display();
    cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
    return 0;
}
