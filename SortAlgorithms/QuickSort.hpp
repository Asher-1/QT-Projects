#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

//快速排序 从小到大
template<typename T>
void QuickSort(T arr[], int start, int end){

    int i = start;
    int j = end;
    //基准数
    T temp = arr[start];
    if (i < j){

        while (i < j){

            //从右向左去找比基准数小的
            while (i < j && arr[j] >= temp){
                j--;
            }
            //填坑
            if(i < j) {
                arr[i++] = arr[j];
            }
            //从左向右 找比基准数大的数
            while (i < j && arr[i] < temp){
                i++;
            }
            //填坑
            if (i < j){
                arr[j--] = arr[i];
            }
        }

        //把基准数放到i位置
        arr[i] = temp;
        //对左半部分进行快速排序
        QuickSort(arr, start, i - 1);
        //对右半部分进行快速排序
        QuickSort(arr, i + 1, end);

    }
}

#endif // QUICKSORT_HPP
