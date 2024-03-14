/*
6. **Verificação de Divisibilidade:**
   - Faça um algoritmo que leia três números inteiros: X, Y, Z 
   e verifique se o número X é divisível por Y e por Z. O algoritmo deverá
    mostrar as possíveis mensagens: o número é divisível por Y e Z. 
    O número é divisível por Y mas não por Z. O número é divisível por 
    Z mas não por Y. O número não é divisível nem por Y nem por Z.
*/
#include <stdio.h>
int main(){
    int x,y,z;
    printf("Digite o valor de x y e z separados por um espaço em branco:\n *Todos os dados devem ser insiridos na ordem apresentada e do modo que foi informado*\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x%y ==0 ){
        if(x%z == 0 ){
            printf("O valor de x é divisivel por x e y");
        }else{
            printf("o valor de x é divisivel apenas por y");
        }
    }
    else if(x%z ==0){
        printf("o valor de x é divisivel apenas por z");
    }
    else{
        printf("O x não é divisível nem por Y nem por Z.");
    }
   return 0;

}