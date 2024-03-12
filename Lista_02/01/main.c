//**Par ou Ímpar:**
//   - Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar.

#include <stdio.h>
int  main(){
    int numero,op;
    op = 1;
    while (op==1)
    {
        printf("Digite o numero \n");
        scanf("%d", &numero);
        if(numero%2 == 0){
            printf("%d é um numero par",numero);
        }
        else{
            printf("%d é um numero impar",numero);
        }    
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
    
    
}