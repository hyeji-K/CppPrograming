//
//  IntArray1.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/22.
//

#include "IntArray1.hpp"
using namespace std;

Array::Array(int s) : size(s)
{
    buf = new int[s];
    memset(buf, 0, sizeof(int) * s);
}

int& Array::operator[](int offset)
{
    if (offset < 0 || offset >= size) // 예외조건 검사
        throw BadIndex(); // 예외객체 생성 및 전달
    return buf[offset];
}
