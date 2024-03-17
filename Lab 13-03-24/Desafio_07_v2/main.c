/*
Este programa calcula o preço a ser pago pelo aluguel de um carro de acordo com o tipo de carro alugado (popular ou de luxo), quantidade de dias de aluguel e quantidade de quilômetros percorridos.
*/
#include <stdio.h>
int main(){
    int tipo , dias ;
    float kms,valor;
    do
    {
        printf("Que tipo de carro deseja alugar:\n[1]Popular\n[2]Carro de luxo");
        scanf("%d",&tipo);
  
    } while (tipo!=1 && tipo!=2);
    printf("O carro foi alugado por quantos dias:");
    scanf("%d",&dias);
    printf("Digite quantos kms foram percorridos:");
    scanf("%f",&kms);
    if(tipo == 1){
        if(kms>=0 && kms<=100){
            valor = (90*dias) +(0.20*kms);
            printf("Valor a pagar: R$%.2f", valor);
        }else if(kms>100){
            valor = (90*dias) +(0.10*(kms-100)+20);
            printf("Valor a pagar: R$%.2f", valor);
        }else{
            printf("kilometragem invalida!");
        }
    }
    else if(tipo == 2){
        if(kms>=0 && kms<=200){
            valor = (150*dias) +(0.30*kms);
            printf("Valor a pagar: R$%.2f", valor);
        }else if(kms>200){
            valor = (150*dias) +(0.25*(kms-200)+60);
            printf("Valor a pagar: R$%.2f", valor);
        }else{
            printf("kilometragem invalida!");
        }
    }
    return 0;
}