#include <stdio.h>

/*
    Um funcionário recebe um salário fixo mais 4% de comissão sobre as
    vendas. Ao receber o salário fixo e o valor das vendas do funcionário,
    calcular e mostrar a comissão e o salário final do funcionário.
*/

int main() {
    float salarioFixo, valorVendas;

    printf("Digite o salário fixo do funcionário:\n> ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor das vendas do funcionário:\n> ");
    scanf("%f", &valorVendas);
    
    float comissao = valorVendas * 0.04;
    float salarioFinal = salarioFixo + comissao;
    
    printf("\nA comissão do funcionário é R$ %.2f\n", comissao);
    printf("O salário final do funcionário é R$ %.2f", salarioFinal);

    return 0;
}
