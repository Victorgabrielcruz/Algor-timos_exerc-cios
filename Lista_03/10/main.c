#include <stdio.h>

int main() {
    int valor, soma = 0;
    
    printf("Digite valores para somar (0 para terminar): \n");
    while (1) {
        scanf("%d", &valor);
        if (valor == 0)
            break;
        soma += valor;
    }
    
    printf("A soma dos valores fornecidos é: %d\n", soma);
    return 0;
}
