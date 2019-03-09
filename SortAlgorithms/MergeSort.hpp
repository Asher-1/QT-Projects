#ifndef MERGESORT_HPP
#define MERGESORT_HPP

//合并算法 从小到大
void Merge(int arr[], int start, int end, int mid, int* temp){

    int i_start = start;
    int i_end = mid;
    int j_start = mid + 1;
    int j_end = end;

    //表示辅助空间有多少个元素
    int length = 0;

    //合并两个有序序列
    while (i_start <= i_end && j_start <= j_end) {

        if(arr[i_start] < arr[j_start]) {
            temp[length++] = arr[i_start++];
        } else {
            temp[length++] = arr[j_start++];
        }
    }

    //i这个序列
    while (i_start <= i_end){
        temp[length++] = arr[i_start++];
    }

    //j序列
    while (j_start <= j_end){
        temp[length++] = arr[j_start++];
    }

    //辅助空间数据覆盖原空间
    for (int i = 0; i < length;i++){
        arr[start + i] = temp[i];
    }
}

//归并排序
void MergeSort(int arr[],int start,int end,int* temp){

    if (start >= end){
        return;
    }

    int mid = (start + end) / 2;
    //分组
    //左半边
    MergeSort(arr,start,mid,temp);
    //右半边
    MergeSort(arr, mid + 1, end,temp);
    //合并
    Merge(arr,start,end,mid,temp);
}


#endif // MERGESORT_HPP
