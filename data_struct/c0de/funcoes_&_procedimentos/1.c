#include <stdio.h>
#include <stdlib.h>

double calc(double radius){
    double result = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    return result;
}

int main(){
    double radius;
    printf("Digite o raio: ");
    scanf("%lf", &radius);

    double result = calc(radius);
    printf("%.3lf", result);

    return 0;
}