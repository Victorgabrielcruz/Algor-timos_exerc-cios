/*
**Condições de Avaliação de X:**
   - Faça um algoritmo que leia um valor x e, se ele for menor que 0,
    avalie Y = x² + 4. Se ele for maior que 0, avalie x³ - 3 e se ele
     for igual a 0 emita uma mensagem de erro.
*/
#include <stdio.h>
int main(){
   double x,y;
   printf("valor de X:");
   scanf("%lf", &x);
   if(x<0){
      y = x*x+4;
      printf("%lf",y);
   }
   else if(x>0){
      y = x*x*x-3;
      printf("%lf",y);
   }
   else{
      printf("[eroo]") ;   
   }
   return 0;
}