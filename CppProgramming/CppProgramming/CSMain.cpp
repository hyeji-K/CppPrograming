//
//  CSMain.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/11.
//

#include <iostream>
#include "CharStack.hpp"
using namespace std;

int main()
{
    CharStack chStack;
    char str[20];
    
    cout << "영어 단어를 입력하시오 : ";
    cin >> str;
    
    char* pt = str;
    while (*pt)
        chStack.push(*(pt++));
    
    cout << "역순 단어 출력 : ";
    while (!chStack.chkEmpty())
        cout << chStack.pop();
    cout << endl;
    return 0;
}
