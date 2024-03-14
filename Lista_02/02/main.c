/*
**Média do Aluno:**
   - Faça um algoritmo que peça o nome e as 3 notas de um aluno e mostre, além do nome e do valor da média do aluno, uma mensagem de "aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário.
*/
#include <stdio.h>
int main(){
    int op, op1;
    char nome[50];
    float nota1, nota2,nota3, media;
    op = 1;
    while (op == 1){
        printf("-----------------------------\n");
        printf("Nome do aluno:");
        scanf("%s",nome);
        printf("Insira a primeira nota:");
        scanf("%f",&nota1);
        printf("Insira a segunda nota:");
        scanf("%f",&nota2);
        printf("Insira a terceira nota:");
        scanf("%f",&nota3);
        media = (nota1+nota2+nota3)/3;
        printf("Qual a nota maxima que se pode obter ?\n[1]100pts\n[2]10pts\n");
        scanf("%d",&op1);
        printf("-----------------------------\n");
        if(op1 == 1){
            if(media >= 60 && media<= 100){
                printf("-----------------------------\n");
                printf("%s \n",nome);
                printf("Nota 1: %2.f \n", nota1);
                printf("Nota 2: %2.f \n", nota2);
                printf("Nota 3: %2.f \n", nota3);
                printf("Media : %2.f \n", media);
                printf("Aprovado\n");
                printf("-----------------------------\n");
                printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
                scanf("%d", &op); 
                while (op != 1 && op != 2){
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
            else if (media >0 && media< 60)
            {
                printf("-----------------------------\n");
                printf("%s \n",nome);
                printf("Nota 1: %2.f \n", nota1);
                printf("Nota 2: %2.f \n", nota2);
                printf("Nota 3: %2.f \n", nota3);
                printf("Media : %2.f \n", media);
                printf("Reprovado\n");        
                printf("-----------------------------\n");
                printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
                scanf("%d", &op); 
                while (op != 1 && op != 2){
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
                printf("A nota inserida é invalida \n");
            }       
        }
        else if (op1 == 2)
        {
            if(media >= 6 && media<= 10){
                printf("-----------------------------\n");
                printf("%s \n",nome);
                printf("Nota 1: %2.f \n", nota1);
                printf("Nota 2: %2.f \n", nota2);
                printf("Nota 3: %2.f \n", nota3);
                printf("Media : %2.f \n", media);
                printf("Aprovado\n");
                printf("-----------------------------\n");
                printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
                scanf("%d", &op); 
                while (op != 1 && op != 2){
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
            else if (media >0 && media<= 6)
            {
                printf("-----------------------------\n");
                printf("%s \n",nome);
                printf("Nota 1: %2.f \n", nota1);
                printf("Nota 2: %2.f \n", nota2);
                printf("Nota 3: %2.f \n", nota3);
                printf("Media : %2.f \n", media);
                printf("Reprovado\n");        
                printf("-----------------------------\n");
                printf("Deseja tentar novamente ?\n[1]sim\n[2]não\n");
                scanf("%d", &op); 
                while (op != 1 && op != 2){
                    printf("Resposta invalida, tente novamente:");
                    scanf("%d", &op); 
                    if(op==1 || op== 2){
                        break;
                }
                }
                if(op== 2){
                    break;
                }
            }else{
                printf("A nota inserida é invalida \n");
            } 
        }
                   
    }
   return 0;
    
}