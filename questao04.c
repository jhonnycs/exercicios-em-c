#include <stdio.h>

/*
    Uma padaria vende pão a R$ 0.50 e broa a R$ 1.50. Busca-se saber quanto foi
    arrecadado com a venda de pães e broas juntas, e quanto será guardado em
    uma conta poupança (10% do total arrecadado)
*/

int main() {
    float precoPao = 0.5;
    float precoBroa = 1.5;
    int quantPao, quantBroa;

    printf("Digite a quantidade de pães vendidos:\n> ");
    scanf("%d", &quantPao);
    printf("Digite a quantidade de broas vendidas:\n> ");
    scanf("%d", &quantBroa);

    float valorArrecadado = precoPao * quantPao + 
                            precoBroa * quantBroa;
    float aGuardar = 0.1 * valorArrecadado;

    printf("\nFoi arrecadado um total de %.2f ", valorArrecadado);
    printf("\nUm total de %.2f será guardado na poupança", aGuardar);

    return 0;
}
