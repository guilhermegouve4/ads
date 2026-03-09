#include <stdio.h>

void troca(int *val1, int *val2){
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp; 
}

int main(){
    int zero = 0, um = 1;
    printf("zero: %d\num: %d\n", zero, um);
    troca(&zero, &um);
    printf("zero: %d\num: %d\n", zero, um);

    return 0;
}