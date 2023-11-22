//
//  IA1Main.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/22.
//

#include <iostream>
#include "IntArray1.hpp"
using namespace std;

int main()
{
    Array arr(10);
    try {
        for (int i = 0; i <= 10; i++)
            arr[i] = i;
    }
    catch (Array::BadIndex e) {
        cerr << "인덱스 범위 오류" << endl;
    }
    cout << arr << endl;
    return 0;
}
