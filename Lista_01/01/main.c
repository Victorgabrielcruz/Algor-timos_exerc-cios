//Escreva um código em C que leia dois números inteiros do teclado, calcula a soma e exibe na tela;
#include <stdio.h>
int main(){
    int num1, num2, op;
    op = 1;
    while (op==1){
        printf("Digite o primeiro numero inteiro: \n");
        scanf("%d", &num1);
        printf("Digite o segundo numero inteiro: \n");
        scanf("%d", &num2);
        printf("Soma dos dois numeros: %d \n" , num1+num2);
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
   return (0);
}