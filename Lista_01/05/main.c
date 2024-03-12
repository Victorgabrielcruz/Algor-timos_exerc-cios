#include <stdio.h>
int UDC(int numero){
    int unidade, dezena, centena, resultado;
        centena = (numero % 10) * 100;
        dezena = numero % 100/10*10;
        unidade = numero/100;
        resultado = centena+dezena+unidade;
        return resultado;
}
int main(){
    int op, numero,udc,milhar,centena,dezena,unidade,resultado, soma;
    op = 1;
    while (op== 1)
    {
        printf("Insira a conta  corrente (3 digitos): \n");
        scanf("%d", &numero);
        if(numero<1000){
            udc = UDC(numero);
            numero += udc;
            milhar = (numero/1000)*0;
            centena = (numero%1000)/100*1;
            dezena =(numero%1000)%100/10*2;
            unidade = numero % 10 * 3;
            soma = milhar+centena+dezena+unidade;
            resultado = (milhar+centena+dezena+unidade)%10;
            printf("O dígito verificador é %d \n", resultado);
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
            printf("[Eroo]Coloca o numero da conta com 3 digitos apenas sua jamanta \n");
        }    
    }
    
        
}