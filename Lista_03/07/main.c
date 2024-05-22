#include <stdio.h>

int main() {
    int n;
    printf("Digite o número de elementos que deseja ver na sequência 1, 3, 5, 7, 9,...: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", 1 + 2 * i);
    }
    printf("\n");
    
    return 0;
}
