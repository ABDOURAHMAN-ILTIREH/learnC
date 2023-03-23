#include <stdio.h>
int main(){

    int age;

    printf("enter your age to vote: ");
    scanf("%d", &age);
    if(age > 120 || age < 0){
        printf("invalid age");
    }

    else if(age >= 18){
        printf("you are eligible to vote");
    }

    else {
        printf("sorry, you are not eligible to vote");
    }

    return 0;
}