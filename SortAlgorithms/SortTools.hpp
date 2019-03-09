#ifndef SORTTOOLS_HPP
#define SORTTOOLS_HPP

//交换函数
void Swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap2(int* a,int* b) {
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}

#endif // SORTTOOLS_HPP
