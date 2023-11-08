//
//  main.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/08.
//

#include <iostream>
using namespace std;

// 함수 사용 예
// 화씨온도를 섭씨온도로 변환하는 함수
// 매개변수 - float fahr: 화씨온도
// 반환값 - 섭씨온도(float)
float FahrToC(float fahr)
{
    return (fahr - 32) * 5 / 9;
}

int main()
{
    float fTemp, cTemp;
    
    cout << "화씨온도 : ";
    cin >> fTemp;
    cTemp = FahrToC(fTemp); // 함수 호출
    cout << "---> 섭씨온도 : " << cTemp << endl;
    return 0;
}


// 참조 호출의 예
void SwapValues(int& x, int& y);

int main()
{
    int a, b;
    
    cout << "두 수를 입력하시오 : ";
    cin >> a >> b;
    if (a < b) SwapValues(a, b);
    cout << "큰 수 = " << a << " 작은 수 = " << b << endl;
    return 0;
}

void SwapValues(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}


// 함수의 다중정의
struct TimeRec {
    int hours;
    int minutes;
};

// 시간을 더하는 함수
void AddTime(TimeRec &t1, const TimeRec &t2)
{
    t1.minutes += t2.minutes;
    t1.hours += t2.hours + t1.minutes / 60;
    t1.minutes %= 60;
}

void AddTime(TimeRec &t, int minutes)
{
    t.minutes += minutes;
    t.hours += t.minutes / 60;
    t.minutes %= 60;
}

int main()
{
    TimeRec tRec1 = { 2, 30 };
    TimeRec tRec2 = { 1, 45 };
    
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << tRec2.hours << "시간 " << tRec2.minutes << "분 = ";
    AddTime(tRec1, tRec2);
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;
    
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << "135분 = ";
    AddTime(tRec1, 135);
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;
    return 0;
}
