#include <stdio.h>

/*
    Calcular média ponderada de duas notas, onde a primeira nota tem
    peso 2 e a segunda tem peso 3
*/

int main() {
    float n1, n2;

    printf("Digite a nota 1:\n> ");
    scanf("%f", &n1);
    printf("Digite a nota 2:\n> ");
    scanf("%f", &n2);
    
    float media = (2*n1 + 3*n2) / 5;
    
    printf("\nA média é %.2f", media);

    return 0;
}
