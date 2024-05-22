#include <stdio.h>

double calcularSerie(int N) {
    double S = 0.0;
    for (int i = 1; i <= N; i++) {
        S += (double)(i * i + 1) / (i + 3);
    }
    return S;
}

int main() {
    int N;
    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &N);
    
    printf("Valor de S: %.5f\n", calcularSerie(N));
    return 0;
}
