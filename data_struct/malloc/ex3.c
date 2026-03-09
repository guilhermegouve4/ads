#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr_size;
    printf("Insira o número de elementos: ");
    scanf("%d", &arr_size);

    int *arr = malloc(arr_size * sizeof(int));
    if(arr == NULL){
        printf("Malloc failed!\n");
        return 1;
    }

    for(int i = 0; i < arr_size; i++){
        *(arr + i) = i * 2;
        printf("%d\n", *(arr + i));
    }
    free(arr);

    return 0;
}
