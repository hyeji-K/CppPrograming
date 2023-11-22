//
//  sortFT.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/22.
//

#ifndef sortFT_hpp
#define sortFT_hpp

#include "SwapFunc.hpp"
// bubble sort algorithm
template <typename T> void sortFT(T arr[], int size)
{
    bool doAgain = true;
    for (int i = 1; doAgain; i++) {
        doAgain = false;
        for (int j = 0; j < size - 1; j++)
        if (arr[j] > arr[j + 1])
            swapFT(arr[j], arr[j + 1]), doAgain = true;
    }
}

#endif /* sortFT_hpp */
