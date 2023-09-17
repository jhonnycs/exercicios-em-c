#include <stdio.h>

/* 
    Faça um algoritmo para calcular quantas ferraduras são necessárias 
    para equipar todos os cavalos comprados para um haras
*/

int main() {
    int quantCavalos;

    printf("Digite a quantidade de cavalos:\n> ");
    scanf("%d", &quantCavalos);

    int ferraduras = quantCavalos * 4;

    printf("\nSerão necessárias %d ferraduras para equipar ", ferraduras);
    printf("%d cavalos", quantCavalos);

    return 0;
}
