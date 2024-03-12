/* 
**Diferença em Segundos para 01/01/1970:**
   - Escreva um código em C que leia uma data completa do teclado (dia, mês e ano) e imprima na tela quantos segundos de diferença para o dia 01/01/1970. Considere a hora 00:00:00 para as duas datas, que todos os anos têm 365 dias e que todos os meses têm 30 dias.
*/
#include <stdio.h>
int main(){
    int diaf, ano_inicial, anof,mesf,op,resultado;
    const int ano = 31536000;
    const int dia = 86400;
    const int mes = 2592000; 
    op = 1;
    while (op == 1){
        printf("Digite o dia, o mes e o ano, separados por um espaço em branco:\n *Todos os dados devem ser insiridos na ordem apresentada e do modo que foi informado*\n");
        scanf("%d%d%d", &diaf,&mesf,&anof);
        if(diaf <= 30 && mesf <=12){
            ano_inicial = 1970;
            resultado = (anof - 1970) * ano;
            resultado += diaf*dia;
            resultado += mesf*mes;
            printf("O total em segundo da data 01/01/1970 a %d/%d/%d é igual a %d segundos \n", diaf,mesf,anof,resultado);
            printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
            scanf("%d", &op); 
            while (op != 1 && op != 2)
            {
                printf("Resposta invalida, tente novamente:");
                scanf("%d", &op); 
                if(op==1 || op== 2){
                    break;
                }
            }
            if(op== 2){
                break;
            }
        }
        else{
            printf("[Erro]Data invalida\n");
            diaf = 0;
            anof = 0;
            mesf = 0;
        }
    }
    
}
