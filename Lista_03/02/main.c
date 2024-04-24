#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;


    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int n;

    scanf("%d", &n);
    printf("---------------------\n");
    fibonacci(n);

    return 0;
}
