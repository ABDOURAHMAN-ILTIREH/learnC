#include <stdio.h>
int main(){
   
   int sum = 0;
   for(int i = 3; i<100; i= i+3){
     sum = sum + i;
   };
   printf("%d",sum);
    
    return 0;
}