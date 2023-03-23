#include <stdio.h>
int main(){

    char operation;
    printf("\nsaisir un operation pour le calcule ['+', '-', '*', '/']: ");
    scanf("%c", &operation);

    double number1 , number2;
    printf("Saisir le premier nombre:" );
    scanf("%lf", &number1);


    printf("\nSaisir le deuxieme nombre:" );
    scanf("%lf", &number2);

    double result;

    switch(operation){
        case '+':
        result = number1 + number2;
        break;

        case '-':
        result = number1 - number2;
        break;

        case '*':
        result = number1 * number2;
        break;

        case '/':
        result = number1 / number2;
        break;

        default:
        printf("saisir deux nombre pour le calcule");

    }

    printf("%.2lf", result);
    
    return 0;
}