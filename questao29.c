#include <stdio.h>
#include <math.h>

/*
    calcular a área de um losango
*/

int main() {
    float diagonalMaior, diagonalMenor;

    printf("Digite a diagonal maior:\n> ");
    scanf("%f", &diagonalMaior);
    printf("Digite a diagonal menor:\n> ");
    scanf("%f", &diagonalMenor);
    
    float area = diagonalMaior * diagonalMenor / 2;
    
    printf("\nA área do losango é %.2f", area);
    
    return 0;
}
