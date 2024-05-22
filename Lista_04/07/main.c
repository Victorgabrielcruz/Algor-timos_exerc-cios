#include <stdio.h>
#include <stdbool.h>

bool isPositivo(int valor) {
    return valor >= 0;
}

int main() {
    int N;
    printf("Digite o numero de valores a serem lidos: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int valor;
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        
        if (isPositivo(valor)) {
            printf("O valor %d é positivo.\n", valor);
        } else {
            printf("O valor %d é negativo.\n", valor);
        }
    }
    return 0;
}
