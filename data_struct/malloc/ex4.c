#include <stdio.h>
#include <stdlib.h>


int *malloc_arr(int arr_size){
    int *arr = malloc (arr_size * sizeof(int));
    for(int i = 0; i < arr_size; i++){
        printf("Digite o %d numero do array: ", i + 1);
        scanf("%d", arr + i);
    }
    return arr;
}

void print_arr(int *arr, int arr_size){
    for(int i = 0; i < arr_size; i++){
        printf("%d\t", *(arr + i));
    }
}

int main(){
    int arr_size;
    printf("Digite o tamanho do array: ");
    scanf("%d", &arr_size);

    int *result = malloc_arr(arr_size);
    print_arr(result, arr_size);

    free(result);

    return 0;
}