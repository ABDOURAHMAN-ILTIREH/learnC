#include <stdio.h>

int main(){
    float valeur = 12.84;
    float carre, cube;
    int end;

    printf("done un nomber reel: ");
    scanf("%f", &valeur);

    carre = valeur * valeur;
    cube = valeur * carre;

    printf("la valuer %.2f a pour carre %.2f est pour cube %.2f", valeur, carre, cube);

    end = cube;

    printf("\nla partier entier  de son cube est %d", end);


}