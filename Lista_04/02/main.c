#include <stdio.h>

void calcularMediaSalario() {
    float salario, somaSalarios = 0;
    int filhos, contador = 0;
    
    while (1) {
        printf("Digite o salario (ou um valor negativo para sair): ");
        scanf("%f", &salario);
        if (salario < 0) break;
        
        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);
        
        somaSalarios += salario;
        contador++;
    }
    
    if (contador > 0) {
        printf("Media de salario: %.2f\n", somaSalarios / contador);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }
}

int main() {
    calcularMediaSalario();
    return 0;
}
