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
            printf("%d é um numero par \n",numero);
            printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
            scanf("%d", &op); 
            while (op != 1 && op != 2){
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
        else if (numero%2==1){
            printf("%d é um numero impar \n",numero);
            printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
            scanf("%d", &op); 
            while (op != 1 && op != 2){
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
        else{
            printf("Resposta invalida, tente novamente:");
        }    

    }
    
    
}