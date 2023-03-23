#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 18;
    int age2 = 6;
    double height = 6.78;

    // and operator &&
    bool result = (age >= 18) && (height > 6.7);
    printf("result = %d", result);


    // not operator !
    bool resultNo = !(age2 <= 18);
    printf("\nresultNo = %d", resultNo);

    return 0;
}