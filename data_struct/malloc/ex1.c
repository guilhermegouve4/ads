#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Insira o tamanho do array: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Malloc failed!");
        return 1;
    }
    for(int i = 0; i < size; i++){
        *(arr + i) = i + 1;
        printf("%d\t", *(arr + i));
    }
    free(arr);
    return 0;
}