#include <stdio.h>


void convert_time(int total_seconds){
    
    int hours = total_seconds / 3600;
    int remainder = total_seconds % 3600;
    int minutes = remainder / 60;
    int seconds = remainder % 60;
    
    printf("\n%d horas, %d minutos e %d segundos\n", hours, minutes, seconds);
}

int main(){
    int time_seconds;
    
    printf("Conversor de tempo\n\n");
    printf("Digite o tempo em segundos: ");
    scanf("%d", &time_seconds);
    
    convert_time(time_seconds);
    
    return 0;
}

