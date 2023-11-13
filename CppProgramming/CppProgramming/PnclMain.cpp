//
//  PnclMain.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/13.
//

#include <iostream>
#include "Pencils.hpp"
using namespace std;

int main()
{
    Pencils p1(5, 7);
    Pencils p2(23);
    
    p1.display(); // 5타 7자루
    (++p1).display(); // 5타 8자루
    p1.display(); // 5타 8자루
    cout << endl;
    p2.display(); // 1타 11자루
    p1 = p2++; // 1타 11자루
    p1.display(); // 1타 11자루
    p2.display(); // 2타
    return 0;
}
