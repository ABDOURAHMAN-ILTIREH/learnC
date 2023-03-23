
#include <stdio.h>
int main(){
   int number, count = 10;
      printf("saisir un nombre: ");
      scanf("%d", &number);

   do{
      int result = number * count;
      printf("%d*%d = %d \n", number, count, result);

      count = count - 1;
   }while(count >= 1);
    
    return 0;
}