#include <stdio.h>

/* 
    Uma fábrica produz camisetas pequenas, médias e grandes,
    custando 10, 12 e 15 reais, respectivamente. O usuário informará
    a quantidade de camisetas vendidas de cada tamanho e o código calculará
    o valor total arrecadado.
*/

#define PRECO_P 10
#define PRECO_M 12
#define PRECO_G 15

int main() {
    int quantP, quantM, quantG;
    
    printf("Digite a quantidade de camisetas pequenas que foi vendida:\n> ");
    scanf("%d", &quantP);

    while (quantP < 0) {
        printf("Digite uma quantidade válida de vendas de camisetas pequenas:\n> ");
        scanf("%d", &quantP);
    }

    printf("Digite a quantidade de camisetas médias que foi vendida:\n> ");
    scanf("%d", &quantM);
    
    while (quantM < 0) {
        printf("Digite uma quantidade válida de vendas de camisetas médias:\n> ");
        scanf("%d", &quantM);
    }
    
    printf("Digite a quantidade de camisetas grandes que foi vendida:\n> ");
    scanf("%d", &quantG);
    
    while (quantG < 0) {
        printf("Digite uma quantidade válida de vendas de camisetas grandes:\n> ");
        scanf("%d", &quantG);
    }

    float valorArrecadado = quantP * PRECO_P + quantM * PRECO_M +
                            quantG * PRECO_G;

    printf("\nO valor total que foi arrecadado foi R$ %.2f", valorArrecadado);

    return 0;
}
