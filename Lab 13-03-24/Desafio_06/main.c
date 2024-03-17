/*
Este programa refaz o desafio anterior, acrescentando o recurso de mostrar que tipo de triângulo será formado: equilátero, isósceles ou escaleno.
*/
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o tamanho do lado 1: ");
    scanf("%f", &lado1);
    printf("Digite o tamanho do lado 2: ");
    scanf("%f", &lado2);
    printf("Digite o tamanho do lado 3: ");
    scanf("%f", &lado3);

    if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
        if(lado1 == lado2 && lado1==lado3){
            printf("É possível formar um triângulo EQUILÁTERO");
        }
        else if(lado1 == lado2 || lado2 == lado3 ||lado1 == lado3){
            printf("É possível formar um triângulo ISÓSCELES");
        }
        else{
            printf("É possível formar um triângulo ESCALENO");
        }
    } 
    else {
        printf("Não é possível formar um triângulo com os segmentos informados.\n");
    }

    return 0;
}
