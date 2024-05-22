#include <stdio.h>

void ordenarValores(int a, int b, int c) {
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    
    printf("Valores ordenados: %d %d %d\n", a, b, c);
}

int main() {
    int N;
    printf("Digite o numero de conjuntos: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int a, b, c;
        printf("Digite os 3 valores do conjunto %d: ", i + 1);
        scanf("%d %d %d", &a, &b, &c);
        ordenarValores(a, b, c);
    }
    return 0;
}
