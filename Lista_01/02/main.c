#include <stdio.h>
int main(){
    //Escreva um código em C que leia o valor do salário de uma pessoa e imprima na tela quantos salários mínimos ela recebe
    int op = 1;
    float salario;
    while (op==1){
        printf("Digite o valor do salario:\n");
        scanf("%f",&salario);
        printf("O salario %.2f é equivalente a %.2f salarios minimos \n", salario, salario/1412.0);
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

}