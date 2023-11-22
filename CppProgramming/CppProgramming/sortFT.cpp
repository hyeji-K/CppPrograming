//
//  sortFT.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/22.
//

#include <iostream>
#include "sortFT.hpp"
#include "MyString.hpp"
using namespace std;

int main()
{
    int x[10] = { 6, 0, 3, 1, 2, 9, 4, 5, 7, 8 };
    sortFT(x, 10);
    for (auto i : x)
        cout << i << " ";
    cout << endl;
}
