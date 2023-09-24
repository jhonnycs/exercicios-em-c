#include <stdio.h>

/* 
    Em uma granja, cada frango possui, no pé direito, um anel de identificação
    que custa R$ 4.00; e no pé esquerdo, dois anéis que indicam a alimentação
    do frango, que custam, cada um, R$ 3.50. Deve-se então, calcular o custo com
    anéis recebendo a quantidade de frangos.
*/

#define PRECO_ANEL_ID 4
#define PRECO_ANEL_ALIMENTO 3.5

int main() {
    int quantFrangos;

    printf("Digite a quantidade de frangos da granja:\n> ");
    scanf("%d", &quantFrangos);

    while (quantFrangos <= 0) {
        printf("Digite uma quantidade válida de frangos:\n> ");
        scanf("%d", &quantFrangos);
    }

    float gastoTotal = quantFrangos*(PRECO_ANEL_ALIMENTO * 2 + PRECO_ANEL_ID);

    printf("\nO gasto total com os anéis foi de R$ %.2f", gastoTotal);

    return 0;
}
