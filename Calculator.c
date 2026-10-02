#include <stdio.h>
int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("enter a number: ");
    scanf("%lf", &num1);

    printf("enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("enter second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        if(num2 == 0){
            printf("you cannot divide by zero :)\n");
        }
            else{
             result = num1 / num2;
            }

       
        break;  
        default: 
        printf("please use a valid operator!\n");

    }
    printf("result %.3lf", result);

    return 0;

}