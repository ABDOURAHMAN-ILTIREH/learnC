#include <stdio.h>
int main(){

    double number;

    printf("Saisir a nombre: ");
    scanf("%lf", &number);
    
    if( number > 0){
        printf("cette nombre est possitive");
    }

    else if( number < 0){
        printf("cette nombre est negative");
    }

    else {
        printf("cette nombre est zero");
    }

    return 0; 
}