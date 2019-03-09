#ifndef INSERTSORT_HPP
#define INSERTSORT_HPP

void InsertSort(int arr[],int length){
    int j;
    for (int i = 1; i < length; i++){

        if (arr[i] < arr[i-1]) {

            int temp = arr[i];
            for (j = i - 1; j >= 0 && temp < arr[j]; j--) {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }

    }
}

#endif // INSERTSORT_HPP
