#include <stdio.h>
#include <math.h>

/*
    calcular a área de um quadrado
*/

int main() {
    float lado;

    printf("Digite o lado do quadrado:\n> ");
    scanf("%f", &lado);
    
    float area = pow(lado, 2);
    
    printf("\nA área do quadrado de lado %.2f é %.2f", lado, area);
    
    return 0;
}
