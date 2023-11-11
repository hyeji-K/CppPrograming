//
//  Complex1.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/11.
//

#ifndef Complex1_hpp
#define Complex1_hpp

#include <stdio.h>
// 복소수를 표현하는 클래스를 선언하라. 복소수의 사칙연산 및 켤레복소수를 구하는 멤버함수를 포함하며, 실수부의 값이 a, 허수부의 값이 b일 때 (a+jb) 형태로 출력할 수 있도록 한다.

class Complex1 {
    double rPart, iPart;
public:
    Complex1(double r=0, double i=0) : rPart(r), iPart(i) {}
    Complex1 conj() const {
        return Complex1(rPart, -iPart);
    }
    Complex1 add(const Complex1& c) const {
        return Complex1(rPart + c.rPart, iPart + c.iPart);
    }
    Complex1 sub(const Complex1& c) const {
        return Complex1(rPart - c.rPart, iPart - c.iPart);
    }
    Complex1 mul(const Complex1& c) const;
    Complex1 div(const Complex1& c) const;
    void display() const;
};

#endif /* Complex1_hpp */
