#ifndef CHOOSESORT_HPP
#define CHOOSESORT_HPP

#include "SortTools.hpp"

//选择排序
void SelectSort(int arr[],int length){
    //选择排序减少交换次数(相对冒泡排序)
    for (int i = 0; i < length;i ++){
        int min = i;
        for (int j = i + 1; j < length; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i) {
            Swap(&arr[min], &arr[i]);
        }
    }
}

#endif // CHOOSESORT_HPP
