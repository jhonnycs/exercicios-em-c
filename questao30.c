#include <stdio.h>

/*
    calcular quantos salários mínimos cabem no salário de um funcionário
*/

int main() {
    float salarioMinimo, salario;

    printf("Digite o salário mínimo atual:\n> ");
    scanf("%f", &salarioMinimo);

    while (salarioMinimo <= 0) {
        printf("Digite um salário mínimo válido:\n> ");
        scanf("%f", &salarioMinimo);
    }
    

    printf("Digite o seu salário:\n> ");
    scanf("%f", &salario);

    while (salarioMinimo <= 0) {
        printf("Digite um salário válido:\n> ");
        scanf("%f", &salario);
    }
    
    float quantSalarioMinNoSalario = salario / salarioMinimo;

    printf("\nHá %.2f salários mínimos no seu salário", quantSalarioMinNoSalario);
    
    return 0;
}
