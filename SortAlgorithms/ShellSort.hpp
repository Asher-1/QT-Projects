#ifndef SHELLSORT_HPP
#define SHELLSORT_HPP

//从小到大
void ShellSort(int arr[], int length){

    int increasement = length;
    int i, j, k;

    do{
        //确定分组的增量
        increasement = increasement / 3 + 1;
        for (i = 0; i< increasement; i++){

            for (j = i + increasement; j < length; j += increasement){

                if (arr[j] < arr[j-increasement] ){

                    int temp = arr[j];
                    for (k = j - increasement; k >= 0 && temp < arr[k]; k -= increasement){
                        arr[k + increasement] = arr[k];
                    }
                    arr[k + increasement] = temp;
                }

            }

        }
    } while (increasement > 1);

}

#endif // SHELLSORT_HPP
