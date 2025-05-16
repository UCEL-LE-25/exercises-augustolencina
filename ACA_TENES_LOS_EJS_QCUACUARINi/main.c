#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){
    int number1, number2;
    printf("Please, enter the first number: \n");
    scanf("%d", &number1);
    printf("Please, enter the second number: \n");
    scanf("%d", &number2);
    printf("The sum of the numbers is equal to: %d", sum(number1, number2));
    return 0;
}