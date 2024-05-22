#include <stdio.h>

int main() {
    int n, a, b;
    printf("Digite o número de elementos da sequência: ");
    scanf("%d", &n);
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    
    for (int i = 0; i < n; i++) {
        int elemento = 1 + 2 * i;
        if (elemento > a && elemento < b) {
            printf("%d ", elemento);
        }
    }
    printf("\n");
    
    return 0;
}
