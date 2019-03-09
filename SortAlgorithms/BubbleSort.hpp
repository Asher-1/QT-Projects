#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include "SortTools.hpp"

//冒泡排序
void BubbleSort(int arr[],int length){
    int flag = 0; //0 标识没有排序好
    for (int i = 0; i < length && flag == 0; i++){
        flag = 1; //认为已经排序好
        for (int j = 1; j < length - i; j++){
            if (arr[j-1] > arr[j]){
                flag = 0;
                Swap2(&arr[j - 1], &arr[j]);
            }
        }
    }

}

#endif // BUBBLESORT_HPP
