/*
Este programa recebe dois valores do tipo inteiro x e y e calcula o valor de z usando a seguinte fórmula:
*/
#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z;
    printf("Digite o valor de x:");
    scanf("%d",&x);
    printf("Digite o valor de y:");
    scanf("%d",&y);
    z=((x*x)+(y*y))/((x-y)*(x-y));
    printf("Valor de z: %d",z);
    return 0;
}