#ifndef QUICKMERGESORT_HPP
#define QUICKMERGESORT_HPP

//合并算法 从小到大
void QuickMerge(int arr[], int start, int end, int mid){

    int *A = arr + start; // 合并后的向量A[0, end - start) = arr[start, end)
    int Lb = mid - start;
    int *B = new int[Lb]; // 前子向量B[0, Lb) = arr[start, mid)

    for (int i = 0; i < Lb; B[i] = A[i++]); // 复制前子向量B

    int Lc = end - mid;
    int *C = arr + mid; // 后子向量C[0, Lc) = arr[mid, end)

    for (int i = 0, j = 0, k = 0; (j < Lb);) { // B[j]和C[k]中小者转至A的末尾
        if ((k < Lc) && (C[k] < B[j])) { // B[j]已无或不小
            A[i++] = C[k++];
        }

        if ((Lc <= k) || (B[j] <= C[k])) { // C[k]已无或更大
            A[i++] = B[j++];
        }
    }

    delete [] B; // 释放临时空间B

}

//归并排序
void QuickMergeSort(int arr[], int start, int end) { // [start, end)

    if (end - start < 2){ // 单元素区间自然有序， 否则......
        return;
    }

    int mid = (start + end) >> 1;       // 以中点为界

    QuickMergeSort(arr, start, mid);    // 对左半边排序

    QuickMergeSort(arr, mid, end);      // 对右半边排序

    QuickMerge(arr, start, end, mid);   // 归并
}


#endif // QUICKMERGESORT_HPP
