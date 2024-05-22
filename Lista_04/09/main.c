#include <stdio.h>

double calcularMediaAprovados(int N) {
    double somaNotas = 0.0;
    int contAprovados = 0;
    
    for (int i = 0; i < N; i++) {
        double nota;
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%lf", &nota);
        
        if (nota >= 6.0) {
            somaNotas += nota;
            contAprovados++;
        }
    }
    
    if (contAprovados > 0) {
        return somaNotas / contAprovados;
    } else {
        return 0.0;
    }
}

int main() {
    int N;
    printf("Digite o numero de alunos: ");
    scanf("%d", &N);
    
    double media = calcularMediaAprovados(N);
    if (media > 0.0) {
        printf("Media das notas dos alunos aprovados: %.2f\n", media);
    } else {
        printf("Nenhum aluno aprovado.\n");
    }
    
    return 0;
}
