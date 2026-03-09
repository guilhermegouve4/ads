#include <stdio.h>
#include <stdlib.h>

int *preencher_arr(int size){
    int *arr = malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Malloc failed!\n");
    }
    for(int i = 0; i < size; i++){
        *(arr + i) = i * 2;
    }
    return arr;
}

int main(){
    int size;
    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int *arr = preencher_arr(size);
    for(int i = 0; i < size; i++){
        printf("%d\t", *(arr + i));
    }

    free(arr);
    return 0;
}