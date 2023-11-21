//
//  PArrMain.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#include <stdio.h>
#include "Person1.hpp"
#include "Student1.hpp"
using namespace std;

void PrintPerson(const Person * const p[], int n)
{
    for (int i=0; i < n; i++) {
        p[i]->print();
        cout << endl;
    }
}

int main()
{
    Person dudley("Dudley");
    Student harry("Harry", "Hogwarts");
    Student ron("Ron", "Hogwarts");
    
    dudley.print(); cout << endl;
    harry.print(); cout << endl << endl;
    
    Person *pPerson[3];
    pPerson[0] = &dudley;
    pPerson[1] = &harry;
    pPerson[2] = &ron;
    PrintPerson(pPerson, 3);
    
    return 0;
}
