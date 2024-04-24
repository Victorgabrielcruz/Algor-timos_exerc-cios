#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next=0;

    for (int i = 0; a+b < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
        
}

int main() {
    int n;

    scanf("%d", &n);
    printf("---------------------\n");
    fibonacci(n);

    return 0;
}
