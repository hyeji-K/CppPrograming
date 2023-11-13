//
//  MSMain.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/14.
//

#include <stdio.h>
#include "MyString.hpp"
using namespace std;

int main()
{
    MyString str1("MyString class");
    MyString str2("Object Oriented");
    MyString str3;
    
    cout << str1 << endl;
    str3 = "Programming"; // 묵시적 형 변환 및 이동 대입
    cout << str3 << "의 문자열 길이는 ";
    cout << str3.length() << endl;
    str1 = str2;
    cout << str1 << endl;
    str1 = str2 + str3;
    
}
