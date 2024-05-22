#include <stdio.h>

void calcularMedia(float nota1, float nota2, float nota3, char tipo) {
    float media;
    if (tipo == 'A') {
        media = (nota1 + nota2 + nota3) / 3;
        printf("Media Aritmetica: %.2f\n", media);
    } else if (tipo == 'P') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
        printf("Media Ponderada: %.2f\n", media);
    }
}

int main() {
    int N;
    printf("Digite o numero de alunos: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        float nota1, nota2, nota3;
        char tipo;
        printf("Digite as 3 notas do aluno %d e o tipo de media (A ou P): ", i + 1);
        scanf("%f %f %f %c", &nota1, &nota2, &nota3, &tipo);
        calcularMedia(nota1, nota2, nota3, tipo);
    }
    return 0;
}
