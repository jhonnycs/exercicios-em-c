#include <stdio.h>

/* 
    Ler as dimensões de um terreno e depois exibir a área do terreno.
*/

int main() {
    int lado1;
    int lado2;

    printf("Digite o lado 1 do terreno:\n>");
    scanf("%d", &lado1);
    printf("\nDigite o lado 2 do terreno:\n>");
    scanf("%d", &lado2);

    int area = lado1 * lado2;

    printf("A área do terreno é %d", area);
    
    return 0;
}
