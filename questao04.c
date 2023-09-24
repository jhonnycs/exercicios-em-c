#include <stdio.h>
#define PRECO_PAO 0.5
#define PRECO_BROA 1.5


/*
    Uma padaria vende pão a R$ 0.50 e broa a R$ 1.50. Busca-se saber quanto foi
    arrecadado com a venda de pães e broas juntas, e quanto será guardado em
    uma conta poupança (10% do total arrecadado)
*/

int main() {
    int quantPao, quantBroa;

    printf("Digite a quantidade de pães vendidos:\n> ");
    scanf("%d", &quantPao);

    while (quantPao < 0) {
        printf("Digite uma quantidade válida de pães vendidos:\n> ");
        scanf("%d", &quantPao);
    }

    printf("Digite a quantidade de broas vendidas:\n> ");
    scanf("%d", &quantBroa);

    while (quantBroa < 0) {
        printf("Digite uma quantidade válida de broas vendidas:\n> ");
        scanf("%d", &quantBroa);
    }
    
    float valorArrecadado = PRECO_PAO * quantPao + 
                            PRECO_BROA * quantBroa;
    float aGuardar = 0.1 * valorArrecadado;

    printf("\nFoi arrecadado um total de %.2f ", valorArrecadado);
    printf("\nUm total de %.2f será guardado na poupança", aGuardar);

    return 0;
}
