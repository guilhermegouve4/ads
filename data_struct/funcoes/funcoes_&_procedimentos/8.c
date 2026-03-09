#include <stdio.h>

void swimmer_category(int age){
    
    if(age >= 5 && age <= 7){
        printf("\nCategoria: Infantil A\n");
    }
    else if(age >= 8 && age <= 10){
        printf("\nCategoria: Infantil B\n");
    }
    else if(age >= 11 && age <= 13){
        printf("\nCategoria: Juvenil A\n");
    }
    else if(age >= 14 && age <= 17){
        printf("\nCategoria: Juvenil B\n");
    }
    else if(age >= 18){
        printf("\nCategoria: Adulto\n");
    }
    else{
        printf("\nIdade invalida para classificacao\n");
    }
}

int main(){
    int age;
    
    printf("Classificacao de Nadador\n\n");
    printf("Digite a idade do nadador: ");
    scanf("%d", &age);
    
    swimmer_category(age);
    
    return 0;
}
