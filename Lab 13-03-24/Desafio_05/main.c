/*
Este programa lê o tamanho de três segmentos de reta e verifica se é possível formar um triângulo com essas retas.
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
        printf("É possível formar um triângulo com os segmentos informados.\n");
    } else {
        printf("Não é possível formar um triângulo com os segmentos informados.\n");
    }

    return 0;
}
