#include <stdio.h>

int main(){
    float remise10 = 0.01 ,  remise20 = 0.02;
    int montant, prixExcate, result; 

    printf("Enter le montant de votre produit: ");
    scanf("%d", &montant);

    if((montant >= 2000) && (montant <= 5000)){
        result = montant * remise10;
        prixExcate = montant - result;

        printf("Le montant a paye apres une remise de 10 pour 100 est %d", prixExcate);
    }
    if(montant > 5000){
        result = montant * remise20;
        prixExcate = montant - result;

          printf("Le montant a paye apres une remise de 20 pour 100 est %d", prixExcate);
    }

    if(montant < 2000){
        printf("le montant a paye est %d", montant);
    }

    return 0;
}