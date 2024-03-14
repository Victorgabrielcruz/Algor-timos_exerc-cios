/* 
**Inversão de Número de Três Dígitos:**
   - Escreva um código em C que leia do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostre o número invertido (no formato UDC). O número invertido deve ser armazenado em outra variável antes de ser mostrado.
*/
#include <stdio.h>
int main(){
    int numero, op, unidade, dezena, centena, resultado;
    op = 1;
    while (op == 1)
    {
        printf("Insira um numero inteiro de 3 digitos: \n");
        scanf("%d", &numero);
        centena = (numero % 10) * 100;
        dezena = numero % 100/10*10;
        unidade = numero/100;
        resultado = centena+dezena+unidade;
        printf("%d \n", resultado);
        printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
        scanf("%d", &op); 
        while (op != 1 && op != 2)
        {
            printf("Resposta invalida, tente novamente:");
            scanf("%d", &op); 
            if(op==1 || op== 2){
                break;
            }
        }
        if(op== 2){
            break;
        }
    }
   return 0;
}