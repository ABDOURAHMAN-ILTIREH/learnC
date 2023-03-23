#include <stdio.h>


int main(){

    char change_ligne = '\n';
    int age = 25;
    printf("age%10d",age);

    // age = 31;
    // printf("\nNew age %d", age);
 
    // int firstNumber = 33;
    // printf("\nfirst number %d", firstNumber);

    // int secondNumber = firstNumber + 33;
    // printf("\nsecond number %d", secondNumber);


    // data type in c
    // int
    int firstNum = 1;
    // float
    float floatNum = 1.9f;
    printf("%cfloat Number : %.1f", change_ligne ,floatNum);
    // double
    double number = 12.45;
    printf("%cdouble number %.2lf", change_ligne , number);
    double num = 5.5e6;
    printf("\ndouble number %lf", num);

    // char
    char character = 'z';
    printf("\ncharacter : %c", character);

    // sizeOf
    printf("\nsizeOf  int : %zu",sizeof(firstNum));
    printf("\nsizeOf double : %zu",sizeof(number));
    printf("\nsizeOf float : %zu", sizeof(floatNum));

    return 0;
}