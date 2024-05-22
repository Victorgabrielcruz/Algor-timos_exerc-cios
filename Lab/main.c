#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ContaM(char *string) {
    int contador = 0;
    int tamanho = (int)strlen(string);
    for (int i = 0; i < tamanho; i++) {
        if (isupper(string[i])) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char string[100];
    int contador;
    while (1) {
        if (fgets(string, 100, stdin) != NULL) {
            // Remove newline character if present
            string[strcspn(string, "\n")] = '\0';

            if (strcmp(string, "FIM") == 0) {
                break;
            } else {
                contador = ContaM(string);
                printf("%i\n", contador);
            }
        }
    }
    return 0;
}
