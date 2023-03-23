#include <stdio.h>

int main(){
    float a, p, max;
    // a = 3.55;
    // p = 6.88;

    printf("donne deux nombre entier:");
    scanf("%f %f", &a, &p);

    if( a > p){

        max = a + p;
        printf("croissant, alors %f et superieur a %f \n", a, p);

        printf("\nla somme entre deux reel est egal: %.2f", max);

    };
    
    if( a == p){
        max = a - p;

        printf("\negale , alors %f et egale a %f \n", a, p);
        printf("\nla sustrations entre deux reel est egal: %.2f", max);
    };
    

    if(a < p){
        max = a / p;

         printf("decroissante alors %f et inferieur a %f \n", a, p);
         printf("la divisions enter deux reel est egal: %.2f", max);
    };
    

    return 0;
}