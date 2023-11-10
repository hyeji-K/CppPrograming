//
//  VecF.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/10.
//

#ifndef VecF_hpp
#define VecF_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
// 벡터 객체를 만들 수 있는 VecF 클래스를 정의하고자 한다. VecF 객체는 저장할 수 있는 float 값의 수를 인수로 지정하여 생성되며, 저장할 값의 배열이 제공될 경우 그 값으로 초기화한다. 인수로 전달된 VecF 객체와 덧셈한 결과를 반환할 수 있으며, 객체에 저장된 벡터를 출력할 수 있다.
class VecF {
    int n;
    float* arr;
public:
    VecF(int d, const float* a=nullptr) : n{ d } {
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) * n);
    }
    // 얕은 복사의 문제점 해결하기 위해 명시적인 복사 생성자 활용 -> 깊은 복사(deep copy)
    VecF(const VecF& fv) : n{ fv.n } {
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float)*n);
    }
    // 이동 생성자의 활용
    VecF(VecF&& fv) : n{fv.n}, arr{fv.arr} {
        fv.arr = nullptr;
        fv.n = 0;
    }
    ~VecF() {
        delete [] arr;
    }
    VecF add(const VecF& fv) const {
        VecF tmp(n); // 벡터의 덧셈 결과를 저장할 임시 객체
        for (int i = 0; i < n; i++)
            tmp.arr[i] = arr[i] + fv.arr[i];
        return tmp;
    }
    void print() const {
        cout << "[ ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "]";
    }
};


#endif /* VecF_hpp */
