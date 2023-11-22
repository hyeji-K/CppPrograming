//
//  SwapFunc.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/22.
//

#ifndef SwapFunc_hpp
#define SwapFunc_hpp

#include <utility>
using namespace std;
template <typename ANY>
void swapFT(ANY &a, ANY &b)
{
    ANY temp = move(a);
    a = move(b);
    b = move(temp);
}

#endif /* SwapFunc_hpp */
