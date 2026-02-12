#include <stdio.h>
#include <stdlib.h>


int is_this_prime_number(int number){
    
    if(number <= 1){
        return 0;
    }
    
    if(number == 2){
        return 1;
    }
    
    if(number % 2 == 0){
        return 0; 
    }

    for(int i = 3; i * i <= number; i += 2){
        if(number % i == 0){
            return 0; 
        }
    }
    
    return 1;
}

void greeting(){
}

int main(){
    int inserted_num;
    printf("Verificador de numero primo\n\n");
    printf("Insira um numero: ");
    scanf("%d", &inserted_num);

    int is_num_prime = is_this_prime_number(inserted_num);
    if(is_num_prime != 1){
        printf("Este não e um numero primo");
        return 0;
    }
    printf("Esse eh um numero primo");
    return 0;
}