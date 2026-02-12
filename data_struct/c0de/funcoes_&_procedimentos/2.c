#include <stdio.h>
#include <stdlib.h>

double mean_calc(double grade_a, double grade_b, double grade_c, char character){
    double result;
    switch(character){
        case 'A':
        case 'a':
            result = (grade_a + grade_b + grade_c) / 3.0;
            break;
        
        case 'P':
        case 'p':
            result = (grade_a * 5.0 + grade_b * 3.0 + grade_c * 2.0) / 10.0;
            break;
        
        case 'H':
        case 'h':
            if(grade_a == 0.0 || grade_b == 0.0 || grade_c == 0.0){
                printf("Erro: Media harmonica nao pode ser calculada com notas zero!\n");
                result = 0.0;
            } else {
                result = 3.0 / ((1.0 / grade_a) + (1.0 / grade_b) + (1.0 / grade_c));
            }
            break;
        
        default:
            printf("Letra invalida!\n");
            result = 0.0;
            break;
    }
    return result;
}

double get_number(){
    double number;
    printf("Insira uma nota: ");
    scanf("%lf", &number);
    return number;
}

int main(){
    double result;
    char character;
    double grade_a = get_number();
    double grade_b = get_number();
    double grade_c = get_number();
    
    printf("Insira a letra (A/P/H): ");
    scanf(" %c", &character);
    
    result = mean_calc(grade_a, grade_b, grade_c, character);
    
    printf("Media calculada: %.2lf\n", result);
    
    return 0;
}