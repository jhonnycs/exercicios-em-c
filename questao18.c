#include <stdio.h>

/* 
    A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por
    hora extra. Calcular e imprimir o salário bruto e o salário líquido de
    um determinado funcionário, considerando que o salário líquido é igual ao
    salário bruto - 10% de impostos.
*/

#define HORA_NORMAL 10
#define HORA_EXTRA 15

int main() {
    int quantHorasExtra, quantHorasNormais;

    printf("Digite quantas horas normais o funcionário trabalhou:\n> ");
    scanf("%d", &quantHorasNormais);

    while (quantHorasNormais < 0) {
        printf("Digite uma quantidade válida de horas normais:\n> ");
        scanf("%d", &quantHorasNormais);
    }
    
    printf("Digite quantas horas extras o funcionário trabalhou:\n> ");
    scanf("%d", &quantHorasExtra);

    while (quantHorasExtra < 0 || (quantHorasExtra > 0 && quantHorasNormais == 0)) {
        if (quantHorasNormais == 0) {
            printf("O funcionário não trabalhou uma hora normal, ");
            printf("então não teria como ter trabalhado horas extras\n");
        }

        printf("Digite uma quantidade válida de horas extras:\n> ");
        scanf("%d", &quantHorasExtra);
    }

    float salarioBruto = quantHorasNormais * HORA_NORMAL + quantHorasExtra * HORA_EXTRA;
    float salarioLiquido = salarioBruto * 0.9;

    printf("\nO salário bruto do funcionário é: R$ %.2f\n", salarioBruto);
    printf("O salário líquido do funcionário é: R$ %.2f", salarioLiquido);

    return 0;
}
