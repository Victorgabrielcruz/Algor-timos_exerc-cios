#include <string.h>
#include <stdio.h>

//Menu
int Menu(){
    int op = 0;
    char op1[2]; 
    do {
        printf("\nVocê deseja:\n[C]Cadastrar entrevistado\n[R]Identificar o risco pelo RCQ\n[S]Sair\n");
        scanf("%1s", op1); 

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
void Cadastro(char nome[], int *idade, char *sexo, float *CCT, float *CQD, int *cd){
    printf("----------Cadastro---------\n");
    printf("Nome:");
    scanf("%s", nome);
    printf("Idade:");
    scanf("%d", idade);
    do
    {
        printf("Sexo:\n[M]Masculino\n[F]Feminino\n");
        scanf(" %c", sexo);
    } while (*sexo != 'M' && *sexo != 'F');
    printf("Circunferência da cintura:");
    scanf("%f", CCT);
    printf("Circunferência do quadril:");
    scanf("%f", CQD);
    *cd = 1;
}

void RCQ(int idade, char sexo, float CCT, float CQD, int cd){
    if(cd != 1){
        printf("Cadastre um usuário primeiro\n");
    }
    else{
        float RCQ = CCT / CQD;
        if(sexo == 'M'){
            if (idade >= 20 && idade <= 29) {
                if(RCQ<0.83){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.83 && RCQ<=0.88){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.89 && RCQ< 0.94){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.94){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } else if (idade >= 30 && idade <= 39) {
                if(RCQ<0.84){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.84 && RCQ<=0.91){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.92 && RCQ< 0.96){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.96){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }       
            } else if (idade >= 40 && idade <= 49) {
                if(RCQ<0.88){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.88 && RCQ<=0.95){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.96 && RCQ< 1.0){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>1.0){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } else if (idade >= 50 && idade <= 59) {
                if(RCQ<0.90){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.90 && RCQ<=0.96){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.97 && RCQ< 1.02){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>1.02){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } else if (idade >= 60 && idade <= 69) {
                if(RCQ<0.91){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.91 && RCQ<=0.98){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.99 && RCQ< 1.03){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>1.03){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } else {
                printf("Idade fora do intervalo esperado.\n");
            }
        }
        else if (sexo == 'F')
        {
            if (idade >= 20 && idade <= 29) {
                if(RCQ<0.71){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.71 && RCQ<=0.77){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.78 && RCQ< 0.82){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.82){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } 
            else if (idade >= 30 && idade <= 39) {
                if(RCQ<0.72){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.72 && RCQ<=0.78){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.79 && RCQ< 0.84){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.84){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }       
            } 
            else if (idade >= 40 && idade <= 49) {
                if(RCQ<0.73){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.73 && RCQ<=0.79){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.80 && RCQ< 0.87){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.87){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } 
            else if (idade >= 50 && idade <= 59) {
                if(RCQ<0.74){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.74 && RCQ<=0.81){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.82 && RCQ< 0.88){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.88){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            }
            else if (idade >= 60 && idade <= 69) {
                if(RCQ<0.76){
                    printf("Seu RCQ é: %.2f. Baixo", RCQ);
                }
                else if(RCQ>=0.76 && RCQ<=0.83){
                    printf("Seu RCQ é: %.2f. Moderado", RCQ);

                }
                else if(RCQ>=0.84 && RCQ< 0.90){
                    printf("Seu RCQ é: %.2f. Alto", RCQ);
                }
                else if(RCQ>0.90){
                    printf("Seu RCQ é: %.2f. Muito Alto", RCQ);
                }
            } 
            else {
                printf("Idade fora do intervalo esperado.\n idade: %d", idade);
            }
        }
        
    }
}

//Identificar o risco pelo RCQ
int main(){
    char nome[100];
    int op;
    int idade = 0;
    char sexo;
    float CQD, CCT;
    int cd = 0;
    do{
        op = Menu();
        if(op == 1){
            Cadastro(nome, &idade, &sexo, &CCT, &CQD, &cd);
            printf("\nCadastro realizado com sucesso\n");
        }
        else if(op == 2){
            RCQ(idade, sexo, CCT, CQD, cd);
        }
    } while (op != 3);

    return 0;
}
