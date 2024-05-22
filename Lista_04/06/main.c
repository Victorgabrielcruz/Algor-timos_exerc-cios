#include <stdio.h>

double calcularSerie(int N) {
    double S = 1.0;
    double fatorial = 1.0;
    
    for (int i = 1; i <= N; i++) {
        fatorial *= i;
        S += 1.0 / fatorial;
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
