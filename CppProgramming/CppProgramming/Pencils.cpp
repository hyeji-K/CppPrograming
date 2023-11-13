//
//  Pencils.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/13.
//

#include "Pencils.hpp"
#include <iostream>
using namespace std;

Pencils& Pencils:: operator++() {
    if (++np >= 12)
        ++dozens, np = 0;
    return *this;
}

Pencils Pencils::operator++(int) {
    Pencils tmp(*this);
    if (++np >= 12)
        ++dozens, np = 0;
    return tmp;
}

void Pencils::display() const
{
    if (dozens) {
        cout << dozens << "타 ";
        if (np) cout << np << "자루";
        cout << endl;
    }
    else
        cout << np << "자루" << endl;
}


