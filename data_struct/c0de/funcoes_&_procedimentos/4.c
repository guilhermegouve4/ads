#include <stdio.h>

double square_root(double n){
    if(n < 0){
        return -1;
    }
    
    if(n == 0){
        return 0;
    }
    
    double x = n;
    double y = 1;
    double precision = 0.00001;
    
    while(x - y > precision){
        x = (x + y) / 2;
        y = n / x;
    }
    
    return x;
}

void bhaskara(double a, double b, double c){
    
    if(a == 0){
        printf("\nNao e possivel calcular as raizes\n");
        return;
    }
    
    double delta = b * b - 4 * a * c;
    
    if(delta < 0){
        printf("\nNao e possivel calcular as raizes\n");
        return;
    }
    
    double x1 = (-b + square_root(delta)) / (2 * a);
    double x2 = (-b - square_root(delta)) / (2 * a);
    
    printf("\nRaiz 1: %.2lf\n", x1);
    printf("Raiz 2: %.2lf\n", x2);
}

int main(){
    double a, b, c;
    
    printf("Calculadora de Bhaskara\n\n");
    printf("Equacao: ax elevado a 2 + bx + c = 0\n\n");
    
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    
    bhaskara(a, b, c);
    
    return 0;
}
