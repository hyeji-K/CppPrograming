//
//  CharStack.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/11.
//

#ifndef CharStack_hpp
#define CharStack_hpp

#include <stdio.h>
// 문자를 최대 20개까지 저장할 수 있는 스택 객체를 만들 수 있는 CharStack 클래스를 선언하라. CharStack 객체는 문자 데이터를 저장(push)하거나 인출(pop)할 수 있으며, 스택이 비어있는지, 가득차 있는지를 검사할 수 있다.

class CharStack {
    enum { size = 20 }; // 스택의 크기
    int top; // 마지막 데이터를 가리키는 포인터 
    char buf[size]; // 스택의 저장공간
public:
    CharStack() : top{ size } {}
    bool chkEmpty() const {
        return top == size;
    }
    bool chkFull() const {
        return !top;
    }
    bool push(char ch);
    char pop();
};

#endif /* CharStack_hpp */
