#include <stdio.h>

void multiply_arr(int multiplier, int lenght, double *arr){
    for(int i = 0; i < lenght; i++){
        *(arr + i) *= multiplier;
    }
}

int main(){
    double arr[3] = {3, 4, 5};
    multiply_arr(3, 3, arr);

    for(int i = 0; i < 3; i++){
        printf("%lf\t", *(arr + i));
    }

    return 0;
}