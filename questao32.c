#include <stdio.h>

/*
    S. João recebeu seu salário, mas precisa pagar duas contas que estão
    atrasadas. Pelo atraso, as contas receberam um aumento de 2%. Calcular
    quanto do salário de João sobrará depois que ele pagar as contas
*/

int main() {
    float salario, conta1, conta2;

    printf("Digite o salário recebido:\n> ");
    scanf("%f", &salario);

    while (salario <= 0) {
        printf("Digite um salário válido:\n> ");
        scanf("%f", &salario);
    }

    printf("Digite o valor da conta 1:\n> ");
    scanf("%f", &conta1);

    while (conta1 <= 0) {
        printf("Digite um valor válido para a conta 1:\n> ");
        scanf("%f", &conta1);
    }

    printf("Digite o valor da conta 2:\n> ");
    scanf("%f", &conta2);

    while (conta2 <= 0) {
        printf("Digite um valor válido para a conta 2:\n> ");
        scanf("%f", &conta2);
    }
        
    salario = salario - conta1 * 1.02 - conta2 * 1.02;

    if (salario >= 0) {
        printf("\nRestará do salário de João R$ %.2f", salario);
    } else {
        printf("\nInfelizmente, João ficou com um saldo negativo de R$ %.2f", salario);
    }

    return 0;
}
