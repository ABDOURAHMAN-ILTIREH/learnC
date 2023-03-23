#include <stdio.h>

int main(){

    // int age;
    // printf("enter your age:");
    // scanf("%d", &age);

    // printf("your age is =  %d", age);

    // double number;
    // char character;

    // printf("Enter your double number: ");
    // scanf("%lf", &number);

    // printf("\nEnter your character: ");
    // scanf("\n%c", &character);

    // printf("double number %lf", number);
    // printf("\ncharacter %c", character);

    // somme
    int num1, num2,   resultSomme;
    double multh, produit;

    printf("Enter your num1: ");
    scanf("%d", &num1);

    printf("\nEnter your num2: ");
    scanf("%d", &num2);

    resultSomme = num2 + num1;

    printf("\nla somme enter num1 %d et num2 %d est egal %d", num1, num2,   resultSomme);

    printf("\nEnter la calcul de double:");
    scanf("%lf", &multh);
    produit =   resultSomme * multh;

    printf("\n la resultat de produit est  %.0lf", produit);

    return 0;
}