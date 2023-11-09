//
//  ClassAndObject.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/09.
//

#ifndef ClassAndObject_hpp
#define ClassAndObject_hpp

#include <stdio.h>

class Counter { // 클래스 Counter의 선언 시작
    // private 멤버 선언
    int value;
public:
    Counter() // 생성자
        { value = 0; }
    
    void reset()
        { value = 0; }
    void count()
        { ++value; }
    int getValue() const
        { return value; }
};

#endif /* ClassAndObject_hpp */
