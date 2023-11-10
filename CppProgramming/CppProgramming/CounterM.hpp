//
//  CounterM.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/10.
//

#ifndef CounterM_hpp
#define CounterM_hpp

#include <stdio.h>

// 디폴트 생성자가 없는 클래스
class CounterM {
    const int maxValue;
    int value;
public:
    // 디폴트 생성자
//    CounterM() {}
    CounterM(int mVal) : maxValue{mVal}, value{0} {}
    // 묵시적 복사 생성자
    CounterM(const CounterM& c) : maxValue{c.maxValue}, value{c.value} {}
    void reset() { value = 0; }
    void count() {
        value = value < maxValue ? value + 1 : 0;
    }
};

#endif /* CounterM_hpp */
