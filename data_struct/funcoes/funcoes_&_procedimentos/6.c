#include <stdio.h>

int calculate_age_in_days(int years, int months, int days){
    int total_days = years * 365 + months * 30 + days;
    return total_days;
}

int main(){
    int years, months, days;
    
    printf("Calculadora de idade em dias\n\n");
    
    printf("Digite a idade em anos: ");
    scanf("%d", &years);
    
    printf("Digite os meses: ");
    scanf("%d", &months);
    
    printf("Digite os dias: ");
    scanf("%d", &days);
    
    int total_days = calculate_age_in_days(years, months, days);
    
    printf("\nIdade total em dias: %d\n", total_days);
    
    return 0;
}
