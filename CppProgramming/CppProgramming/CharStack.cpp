//
//  CharStack.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/11.
//

#include "CharStack.hpp"
#include <iostream>
using namespace std;

bool CharStack::push(char ch)
{
    if (chkFull()) {
        cout << "스택이 가득 차 있습니다." << endl;
        return false;
    }
    buf[--top] = ch; // 스택에 공간이 있으면 저장
    return true;
}

char CharStack::pop()
{
    if (chkEmpty()) {
        cout << "스택에 데이터가 없습니다." << endl;
        return 0;
    }
    return buf[top++];
}
