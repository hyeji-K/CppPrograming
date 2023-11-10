//
//  CounterM.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/10.
//

#include "CounterM.hpp"
#include <iostream>

int main()
{
    CounterM cnt(999);
//    CounterM cnt2; // 에러
//    CounterM cntMArr1[3]; // 에러
    CounterM cntMArr2[3] = { CounterM(9), CounterM(99), CounterM(999)};
//    CounterM *pt = new CounterM[10]; // 에러
    
    CounterM cnt4{99};
    CounterM cnt5{cnt4};
    CounterM cnt6 = cnt4;
}
