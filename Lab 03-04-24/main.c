#include <string.h>
#include <stdio.h>
//Menu
int Menu(){
    int op = 0;
    char op1[2]; 
    do {
        printf("Você deseja:\n[C]Cadastrar entrevistado\n[R]Identificar o risco pelo RCQ\n[S]Sair\n");
        scanf("%1s",op1); 

        if (strcmp(op1, "C") == 0 || strcmp(op1, "c") == 0) {
            op = 1;
        } else if (strcmp(op1, "R") == 0 || strcmp(op1, "r") == 0) {
            op = 2;
        } else if (strcmp(op1, "S") == 0 || strcmp(op1, "s") == 0) {
            op = 3;
        }

    } while (op <= 0 || op > 3);
    
    return op;
}
//Cadastro
void Cadastro(nome,idade,sexo,CCT,CQD,cd){
    printf("----------Cadastro---------\n");
    printf("Nome:");
    scanf("%s", nome);
    printf("Idade:");
    scanf("%s"idade)
    do
    {
        printf("Sexo:\n[M]Masculino\n[F]Feminino");
        scanf("%1s",sexo);
    } while (sexo[0] != 'M' && sexo[0] != 'F');
    printf("circunferência da cintura:");
    scanf("%s",CCT);
    printf("circunferência do quadril:");
    scanf("%s",CQD);
    cd = 1;
}
void RCQ(nome,idade,sexo,CCT,CQD,cd){
    if(cd != 1){
        printf("Cadastre um usuario primeiro\n");
    }
    else{
        float RCQ = CCT/CQD;
        if(strcmp(sexo, "M") == 0){
            if (idade >= 20 && idade <= 29) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else if (idade >= 30 && idade <= 39) {
                if(RCQ<0.84){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.84 && RCQ<=0.91){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.92 && RCQ< 0.96){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.96){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }       
            } else if (idade >= 40 && idade <= 49) {
                if(RCQ<0.88){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.88 && RCQ<=0.95){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.96 && RCQ< 1.0){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>1.0){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else if (idade >= 50 && idade <= 59) {
                if(RCQ<0.90){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.90 && RCQ<=0.96){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.97 && RCQ< 1.02){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>1.02){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else if (idade >= 60 && idade <= 69) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else {
                printf("Idade fora do intervalo esperado.\n");
            }
        }
        else if (strcmp(sexo, "F") == 0)
        {
                        if (idade >= 20 && idade <= 29) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else if (idade >= 30 && idade <= 39) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }       
            } else if (idade >= 40 && idade <= 49) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else if (idade >= 50 && idade <= 59) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else if (idade >= 60 && idade <= 69) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %2.f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %2.f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %2.f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %2.f. Muito Alto", RCQ);
                }
            } else {
                printf("Idade fora do intervalo esperado.\n");
            }
        }
        
    }
}
//Identificar o risco pelo RCQ
int main(){
    char nome[100];
    int op;
    op = Menu();
    printf("%d",op);
}