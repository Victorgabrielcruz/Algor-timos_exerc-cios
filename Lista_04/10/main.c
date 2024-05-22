#include <stdio.h>

char identificarCategoria(int idade) {
    if (idade >= 5 && idade <= 7) {
        return 'F';
    } else if (idade >= 8 && idade <= 10) {
        return 'E';
    } else if (idade >= 11 && idade <= 13) {
        return 'D';
    } else if (idade >= 14 && idade <= 15) {
        return 'C';
    } else if (idade >= 16 && idade <= 17) {
        return 'B';
    } else if (idade >= 18) {
        return 'A';
    } else {
        return 'X'; // Categoria inexistente para idades fora do intervalo
    }
}

int main() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    char categoria = identificarCategoria(idade);
    if (categoria != 'X') {
        printf("Categoria do nadador: %c\n", categoria);
    } else {
        printf("Idade fora do intervalo para categorias.\n");
    }
    
    return 0;
}
