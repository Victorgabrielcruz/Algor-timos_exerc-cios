/*
**Números Palíndromos:**
   - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita têm o mesmo valor. Exemplo: 929, 44, 97379. Faça um algoritmo que, dado um número de 5 dígitos, calcule e escreva se este é ou não palíndromo.
*/

#include <stdio.h>
#include <string.h>

char *UDC(int numero){
   static char result[50]; // Array de caracteres para armazenar a mensagem
   int unidade, dezena, centena,uni_milhar,dez_milhar, resultado;
   dez_milhar = (numero%10)*10000;
   uni_milhar = (numero%100/10)*1000;
   centena = (numero%1000/100)*100;
   dezena = (numero%10000/1000)*10;
   unidade = (numero/10000);
   resultado = dez_milhar+uni_milhar+centena+dezena+unidade;
   if (resultado == numero){
      strcpy(result, "É um palíndromo");   
      }
   else{
      strcpy(result, "Não é um palíndromo");
   }

   return result;
}
int main(){
   int numero;
   char *resultado;
   printf("Insira um numero inteiro de 5 digitos: \n");
   scanf("%d", &numero);
   printf("%d - %s", numero, UDC(numero));
   return 0;
}