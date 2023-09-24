#include <stdio.h>

/*
    Ler a quantidade de cada tipo de moeda (5, 10, 25, 50 centavos e moedas
    de 1 real) e calcular quantos reais há no total
*/

int main() {
    int quant5c, quant10c, quant25c, quant50c, quant1r;

    printf("Digite a quantidade de moedas de 5 centavos:\n> ");
    scanf("%d", &quant5c);

    while (quant5c < 0) {
        printf("Digite uma quantidade válida de moedas de 5 centavos:\n> ");
        scanf("%d", &quant5c);
    }
    
    printf("Digite a quantidade de moedas de 10 centavos:\n> ");
    scanf("%d", &quant10c);

    while (quant10c < 0) {
        printf("Digite uma quantidade válida de moedas de 10 centavos:\n> ");
        scanf("%d", &quant10c);
    }

    printf("Digite a quantidade de moedas de 25 centavos:\n> ");
    scanf("%d", &quant25c);

    while (quant25c < 0) {
        printf("Digite uma quantidade válida de moedas de 25 centavos:\n> ");
        scanf("%d", &quant25c);
    }

    printf("Digite a quantidade de moedas de 50 centavos:\n> ");
    scanf("%d", &quant50c);

    while (quant50c < 0) {
        printf("Digite uma quantidade válida de moedas de 50 centavos:\n> ");
        scanf("%d", &quant50c);
    }

    printf("Digite a quantidade de moedas de 1 real:\n> ");
    scanf("%d", &quant1r);

    while (quant1r < 0) {
        printf("Digite uma quantidade válida de moedas de 1 real:\n> ");
        scanf("%d", &quant1r);
    }

    float valorTotal = quant5c * 0.05 + quant10c * 0.1 + 
                       quant25c * 0.25 + quant50c * 0.5 + quant1r;

    printf("\nO valor total é R$ %.2f", valorTotal);

    return 0;
}
