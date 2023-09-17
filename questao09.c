#include <stdio.h>

/* 
    Uma fábrica produz camisetas pequenas, médias e grandes,
    custando 10, 12 e 15 reais, respectivamente. O usuário informará
    a quantidade de camisetas vendidas de cada tamanho e o código calculará
    o valor total arrecadado.
*/

int main() {
    float precoP = 10;
    float precoM = 12;
    float precoG = 15;
    int quantP, quantM, quantG;
    
    printf("Digite a quantidade de camisetas pequenas que foi vendida:\n> ");
    scanf("%d", &quantP);
    printf("Digite a quantidade de camisetas médias que foi vendida:\n> ");
    scanf("%d", &quantM);
    printf("Digite a quantidade de camisetas grandes que foi vendida:\n> ");
    scanf("%d", &quantG);

    float valorArrecadado = quantP * precoP + quantM * precoM +
                            quantG * precoG;

    printf("\nO valor total que foi arrecadado foi R$ %.2f", valorArrecadado);

    return 0;
}
