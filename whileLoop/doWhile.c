#include <stdio.h>
int main(){

    int number;

    do{
        printf("saisir un nombre comprise enter 1 et 3: ");
        scanf("%d", &number);

    } while(number < 1 || number > 3);

    printf("greate job!");
    return 0;
}