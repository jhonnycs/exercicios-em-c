#include <stdio.h>

/* 
    Em uma granja, cada frango possui, no pé direito, um anel de identificação
    que custa R$ 4.00; e no pé esquerdo, dois anéis que indicam a alimentação
    do frango, que custam, cada um, R$ 3.50. Deve-se então, calcular o custo com
    anéis recebendo a quantidade de frangos.
*/

int main() {
    int quantFrangos;
    float precoAnelId = 4;
    float precoAnelAlimento = 3.5;

    printf("Digite a quantidade de frangos da granja:\n> ");
    scanf("%d", &quantFrangos);

    float gastoTotal = quantFrangos*(precoAnelAlimento * 2 + precoAnelId);

    printf("\nO gasto total com os anéis foi de R$ %.2f", gastoTotal);

    return 0;
}
