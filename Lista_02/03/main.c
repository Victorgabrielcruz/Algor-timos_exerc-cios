/*
**Estado da Água:**
   - Faça um algoritmo que leia a temperatura da água e mostre se ela está em estado sólido, líquido ou gasoso.
*/
#include <stdio.h>
int main(){
    float temp;
    int op = 1;
    do
    {
        printf("Insira a temperatura que a agua se encontra:");
        scanf("%f",&temp);
        if(temp<=0){
            printf("A agua esta em estado solido\n");
        }
        else if(temp> 0 && temp<100){
            printf("A agua esta em estado liquido\n");
        }else if(temp>=100){
            printf("A agua esta em estado gasoso\n");
        }else{
            printf("Entrada invalida");
        }
        printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
        scanf("%d", &op); 
        while (op != 1 && op != 2){
            printf("Resposta invalida, tente novamente:");
            scanf("%d", &op); 
            if(op==1 || op== 2){
                break;
            }
        }    
    } while (op==1);
    
    
   return 0;

}
