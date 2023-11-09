//
//  ClassAndObject.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/09.
//

#include <iostream>
#include "ClassAndObject.hpp"
using namespace std;

// 클래스의 예
// 계수기를 나타내는 클래스를 선언하라. 계수기 객체는 값을 0으로 지울 수 있고, 값을 1씩 증가시킬 수 있으며, 현재의 계수기 값을 알려줄 수 있다.

int main()
{
    Counter cnt; // Counter 객체의 정의
//    cnt.value = 0; // 오류
    cnt.reset(); // 계수기를 0으로 지움
    cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
    cnt.count(); // 계수기를 1 증가시킴
    cnt.count();
    cout << "게수기의 현재 값 : " << cnt.getValue() << endl;
    return 0;
}
