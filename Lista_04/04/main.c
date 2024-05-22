#include <stdio.h>

void verificarTriangulo(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triangulo Equilatero\n");
        } else if (x == y || y == z || x == z) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Nao e um triangulo\n");
    }
}

int main() {
    float x, y, z;
    
    while (1) {
        printf("Digite os 3 lados do triangulo (ou negativos para sair): ");
        scanf("%f %f %f", &x, &y, &z);
        if (x < 0 || y < 0 || z < 0) break;
        verificarTriangulo(x, y, z);
    }
    
    return 0;
}
