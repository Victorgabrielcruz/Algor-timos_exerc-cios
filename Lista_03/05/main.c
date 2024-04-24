#include <stdio.h>
int main() {
    int idade;
    do {
        printf("Digite uma idade entre 0 e 140 anos: ");
        scanf("%d", &idade);
    } while (idade < 0 || idade > 140);
    printf("Idade válida inserida: %d anos\n", idade);
}