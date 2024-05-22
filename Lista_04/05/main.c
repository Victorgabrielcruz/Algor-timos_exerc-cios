#include <stdio.h>

void identificarConceito(float media) {
    if (media <= 39) {
        printf("Conceito: F\n");
    } else if (media <= 59) {
        printf("Conceito: E\n");
    } else if (media <= 69) {
        printf("Conceito: D\n");
    } else if (media <= 79) {
        printf("Conceito: C\n");
    } else if (media <= 89) {
        printf("Conceito: B\n");
    } else {
        printf("Conceito: A\n");
    }
}

int main() {
    int N;
    printf("Digite o numero de alunos: ");
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        float media;
        printf("Digite a media do aluno %d: ", i + 1);
        scanf("%f", &media);
        identificarConceito(media);
    }
    return 0;
}
