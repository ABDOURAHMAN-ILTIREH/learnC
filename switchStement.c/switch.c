#include <stdio.h>
int main(){
   int jour;


   printf("saisir a nombre de jour enter 1 et 7: ");
   scanf("%d",&jour);

   switch(jour){
       case 1:
       printf("samadie");
       break;

       case 2:
       printf("Dimanche");
       break;

       case 3:
       printf("Lundi");
       break;

       case 4:
       printf("Mardi");
       break;

       case 5:
       printf("Mercredie");
       break;

       case 6:
       printf("Jeudie");
       break;

       case 7:
       printf("Vandradie");
       break;

       default:
       printf("invalid Nombre");
   }

    return 0;
}

// #include <stdio.h>
// int main(){

    
//     return 0;
// }

