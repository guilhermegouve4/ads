#include <stdio.h>
#include <stdlib.h>

int *even_gen(int size){
    int *arr = malloc(size * sizeof(int));
    for(int i = 0; i < size; i++){
        *(arr + i) = i * 2;
    }

    return arr;
}

int arr_sum(int *arr, int arr_size){
    int total = 0;
    for(int i = 0; i < arr_size; i++){
        total += *(arr + i);
    }

    return total;
}

int main(){
    int arr_size;
    printf("Digite o numero de elementos: ");
    scanf("%d", &arr_size);

    int *arr = even_gen(arr_size);
    int result = arr_sum(arr, arr_size);
    free(arr);
    printf("%d", result);
    return 0;
}