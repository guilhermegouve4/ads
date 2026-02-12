#include <stdio.h>

int sum(int num1, int num2){
    return num1 + num2;
}

int ask_4_int(){
    int inserted_num;
    printf("Type an integer: ");
    scanf("%d", &inserted_num);
    while(getchar() != '\n');
    return inserted_num;
}

void farewell(){
    printf("Thks for using (:\n");
}

int main(){
    int num1 = ask_4_int();
    int num2 = ask_4_int();

    int result = sum(num1, num2);

    printf("\nthe result is: %d\n", result);
    farewell();
    return 0;
}