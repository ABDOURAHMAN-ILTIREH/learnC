#include <stdio.h>

int main(){
    char reponse;

    printf("Enter un letter enter a et f:"); 
    scanf("\n%c",&reponse); // enter seulment a,b,c,d,e et f

    if((reponse >= 'a') && (reponse <= 'f'))
        printf("correct\n");
    else
      printf("incorrect");
}