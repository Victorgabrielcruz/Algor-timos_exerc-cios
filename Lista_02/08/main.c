#include <stdio.h>

int main() {
    int num1, num2;
    float resultado;
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    do {
        printf("Insira o segundo número (diferente de zero): ");
        scanf("%d", &num2);
        if (num2 == 0) {
            printf("O segundo número não pode ser zero. Por favor, insira um número diferente de zero.\n");
        }
    } while (num2 == 0);
    resultado = num1 / num2;
    printf("O resultado da divisão de %d por %d é: %.2f\n", num1, num2, resultado);
    return 0;
}
