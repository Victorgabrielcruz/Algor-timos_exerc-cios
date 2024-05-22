#include <stdio.h>

int main() {
    int n, cont = 0, valor = 1;
    printf("Digite o número de elementos da sequência que são divisíveis por três e múltiplos de cinco ou divisíveis por sete: ");
    scanf("%d", &n);
    
    while (cont < n) {
        if (valor % 3 == 0 && (valor % 5 == 0 || valor % 7 == 0)) {
            printf("%d ", valor);
            cont++;
        }
        valor += 2;
    }
    printf("\n");
    
    return 0;
}
