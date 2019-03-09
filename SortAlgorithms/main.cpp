#include <iostream>

#include "BubbleSort.hpp"
#include "SelectSort.hpp"
#include "InsertSort.hpp"
#include "ShellSort.hpp"
#include "QuickSort.hpp"

#include "QuickMergeSort.hpp"
#include "MergeSort.hpp"
#include "HeapSort.hpp"

#include <chrono>
using namespace std;

#define MAX 20

//创建数组
int* CreateArray(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int* arr = (int*)malloc(sizeof(int) * MAX);
    for (int i = 0; i < MAX; i++){
        arr[i] = rand() % MAX;
    }
    return arr;
}

//打印
template <typename T>
void PrintArray(T arr[], int len){
    for (int i = 0; i < len; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void){

    int *arr = CreateArray();
    //辅助空间 for MergeSort()
    int* temp = static_cast<int*>(malloc(sizeof(int) * MAX));

    //    double arr2[] = {3.0, 1.2, 3.0, 1.2, 2, 3, 23, 0.3, 23, 23.3};

    printf("Pre Sort :\n");
    PrintArray(arr,MAX);

    auto t_start = std::chrono::steady_clock::now();

//    BubbleSort(arr, MAX);

//    SelectSort(arr, MAX);

//    InsertSort(arr, MAX);

//    ShellSort(arr, MAX);

    QuickSort(arr, 0, MAX-1);

//    QuickMergeSort(arr, 0, MAX);

//    MergeSort(arr, 0, MAX - 1, temp);

//    HeapSort(arr, MAX);

    auto t_end = std::chrono::steady_clock::now();
    std::chrono::duration<double, std::micro> elapsed = t_end - t_start; // std::micro 表示以微秒为时间单位
    std::cout << std::endl;
    std::cout << "Sort " << MAX << " elements -->" << " Time Span: "  << elapsed.count()/1000 << "ms" << std::endl;
    std::cout << std::endl;

    printf("Post Sort: \n");
    PrintArray(arr, MAX);

    // 释放动态分配的内存
    if (arr != nullptr) {
        free(arr);
        arr = nullptr;
    }
    if (temp != nullptr) {
        free(temp);
        temp = nullptr;
    }

    system("pause");
    return 0;
}
