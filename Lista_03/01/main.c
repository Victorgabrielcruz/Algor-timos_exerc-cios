#include <stdio.h>
#include <stdlib.h>
int  main(){
    int N;
    scanf("%d", &N);
    printf("--------------------\n");
    int *numeros = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }
    printf("--------------------\n");
    for (int i = 0; i < N; i++) {
        printf("%d\n", numeros[i]);
    }
}