#include <stdio.h>

void double_arr(int *arr){
    for(int i = 0; i < 5; i++){
        *(arr + i) *= 2;
        printf("%d\t", *(arr + i));
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    double_arr(arr);
    return 0;
}