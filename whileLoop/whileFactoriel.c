#include <stdio.h>
int main(){

    int count, number, store;
    count = 1;

    printf("saisir un nombre Factorial: ");
    scanf("%d", &number);
    
    while( count <= 10){
        store = number * count;
        printf("%d*%d = %d \n", number, count, store);

        count = count + 1;
    }

    return 0;
}