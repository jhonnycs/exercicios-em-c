#include <stdio.h>

/* 
    A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por
    hora extra. Calcular e imprimir o salário bruto e o salário líquido de
    um determinado funcionário, considerando que o salário líquido é igual ao
    salário bruto - 10% de impostos.
*/

int main() {
    float horaNormal = 10;
    float horaExtra = 15;
    int quantHorasExtra, quantHorasNormais;

    printf("Digite quantas horas normais o funcionário trabalhou:\n> ");
    scanf("%d", &quantHorasNormais);
    printf("Digite quantas horas extras o funcionário trabalhou:\n> ");
    scanf("%d", &quantHorasExtra);

    float salarioBruto = quantHorasNormais * horaNormal + quantHorasExtra * horaExtra;
    float salarioLiquido = salarioBruto * 0.9;

    printf("\nO salário bruto do funcionário é: R$ %.2f\n", salarioBruto);
    printf("O salário líquido do funcionário é: R$ %.2f", salarioLiquido);

    return 0;
}
