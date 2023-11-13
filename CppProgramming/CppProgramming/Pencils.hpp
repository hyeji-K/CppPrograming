//
//  Pencils.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/13.
//

#ifndef Pencils_hpp
#define Pencils_hpp

#include <stdio.h>
// n타 m자루 형태로 연필의 개수를 표현하는 클래스를 정의한다(1타는 12자루). 낱개의 수를 1개 증가시키는 전위 및 후위 표기 ++ 연산자를 포함하며, 연필의 수량을 출력하는 멤버함수를 포함한다.
class Pencils {
    int dozens;
    int np;
public:
    Pencils() : dozens(0), np(0) {};
    Pencils(int n) { dozens = n / 12; np = n % 12; }
    Pencils(int d, int n) : dozens(d), np(n) {}
    Pencils& operator ++ (); // 전위 표기
    Pencils operator ++ (int); // 후위 표기
    void display() const;
};

#endif /* Pencils_hpp */
