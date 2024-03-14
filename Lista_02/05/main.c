/*
5. **Ordenação de Valores:**
   - Faça um algoritmo que receba como entrada três valores (A, B e C).
    Após o processamento, o menor valor deverá estar em A e o maior valor em C, e o valor intermediário em B. Imprima A, B e C.
*/
#include <stdio.h>
int main(){
    float A,a,B,b,C,c;
    printf("Digite o valor de A B e C separados por um espaço em branco:\n *Todos os dados devem ser insiridos na ordem apresentada e do modo que foi informado*\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b){
        if(a<c){
            A = a;
            if(b<c){
                B=b;
                C=c;
            }
            else{
                B=c;
                C=b;
            }
        }
        else{
            A = c;
            B = a ;
            C = b;
        }

            }
    else{
        if(a>c){
            C=a;
            if(b<c){
                A=b;
                B=c;
            }
            else{
                B=b;
                A=c;
            }   
        }
        else{
            A=b;
            B=a;
            C=c;
        }
    }
    printf("%f %f %f",A,B,C);
   return 0;
}