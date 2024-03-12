#include <stdio.h>
int  main(){
    int numero;
    printf("Digite o numero \n");
    scanf("%d", &numero);
    if(numero%2 == 0){
        printf("%d é um numero par",numero);
    }
    else{
        printf("%d é um numero impar",numero);
    }
}