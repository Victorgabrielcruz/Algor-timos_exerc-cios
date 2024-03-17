/*
Este programa pergunta a velocidade de um carro e exibe uma mensagem dizendo se o usuário foi multado caso ultrapasse 80 Km/h. Em caso de multa, exibe o valor da multa.
*/
#include <stdio.h>
int main(){
    float km,multa;
    printf("Digite quantos kms/h:");
    scanf("%f",&km);
    if(km>=0 && km<=80){
        printf("Você esta dentro dos limites de velocidade");
    }
    else if(km>80){
        multa = (km-80)*5.00;
        printf("O usuario foi multado em: R$%.2f", multa);
    }else{
        printf("Valor invalido");
    }
    return 0;
}