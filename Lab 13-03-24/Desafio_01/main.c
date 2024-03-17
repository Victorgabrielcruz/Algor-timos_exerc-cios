/*
Multa por Excesso de Peso de Peixes

João Sardinha, um pescador muito habilidoso, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de Minas Gerais (50 quilos), deve pagar uma multa de R$ 4,00 por quilo excedente. Este programa verifica se há excesso de peso de peixes pescados e calcula o valor da multa a ser paga.
*/
#include <string.h>
#include <stdio.h>
int main(){
    float kg,limite,valor;
    char excesso[20];
    printf("Digite o peso em kg:\n");
    scanf("%f",&kg);
    if(kg<=50 && kg>=0){
        valor = 0;
        strcpy(excesso, "[SEM EXCESSO]");
        printf("Sem excesso de peso!\nValor a pagar: %.2f\n", valor);
    }
    else if(kg>50){
        valor = (kg-50)*4.00;
        strcpy(excesso, "[EXCESSO]");
        printf("Excesso de peso!\nValor a pagar: %.2f\n", valor);
        
    }else{
        printf("Valor invalido");
        return 0;
    }
    printf("Situação: %s\n", excesso);
    return 0;

}