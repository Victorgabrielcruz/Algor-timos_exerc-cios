#include <stdio.h>

int main() {
    int n;
    printf("Os  primeiros N elementos da sequencia de fibonati. Digite o N. ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d", n);
    }
    int primeiro = 0, segundo = 1, proximo;
    for (int i = 2; i <= n; i++) {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
        printf("%d", segundo);
    }
}