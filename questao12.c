#include <stdio.h>

/* 
    Ler o salário de um funcionário e aumentá-lo em 15%. Depois disso,
    descontar 8% do salário. Mostrar o salário inicial, salário com
    aumento e salário final.
*/

int main() {
    float salarioInicial;
    
    printf("Digite o salário inicial do funcionário:\n> ");
    scanf("%f", &salarioInicial);

    while (salarioInicial <= 0) {
        printf("Digite um salário válido:\n> ");
        scanf("%f", &salarioInicial);
    }
    
    float salarioComAumento = salarioInicial * 1.15;
    float salarioComDesconto = salarioComAumento * 0.92;

    printf("\nO salário inicial é R$ %.2f\n", salarioInicial);
    printf("O salário com aumento de 15%% é R$ %.2f\n", salarioComAumento);
    printf("O salário final, com desconto de 8%%, é R$ %.2f", salarioComDesconto);

    return 0;
}
