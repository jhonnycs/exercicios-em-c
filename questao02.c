#include <stdio.h>

/* 
    Ler as dimensões de um terreno e depois exibir a área do terreno.
*/

int main() {
    float lado1;
    float lado2;

    printf("Digite o lado 1 do terreno:\n>");
    scanf("%f", &lado1);
    while (lado1 <= 0) {
        printf("Digite uma medida válida para o lado 1:\n>");
        scanf("%f", &lado1);
    }
    
    printf("\nDigite o lado 2 do terreno:\n>");
    scanf("%f", &lado2);
    while (lado2 <= 0) {
        printf("Digite uma medida válida para o lado 2:\n>");
        scanf("%f", &lado2);
    }

    float area = lado1 * lado2;

    printf("\nA área do terreno é %.2f", area);
    
    return 0;
}
