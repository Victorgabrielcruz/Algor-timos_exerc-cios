#include <stdio.h>
int main(){
    int cigarros;
    float tempo,dias_perdidos;
    printf("Digite quantos cigarros você fuma por dia:");
    scanf("%d",&cigarros);
    printf("Digite a quantos anos você fuma:");
    scanf("%f",&tempo);
    cigarros = cigarros *(365*tempo);
    tempo = (cigarros * 10)/1440;
    printf("Você ja perdeu no total %1.f dias de vida", tempo);
    return 0;
}