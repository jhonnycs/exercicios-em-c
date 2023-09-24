#include <stdio.h>

/* 
    Uma lanchonete vende um tipo de sanduíche cujo recheio inclui
    duas fatias de queijo, uma de presunto e uma rodela de hambúrguer.
    As fatias de queijo e de presunto pesam 50 gramas, e a rodela de
    hambúrguer pesa 100 gramas. Calcular as quantidades (em quilos) de
    quejo, presunto e carne para comprar.
*/

#define QUEIJO 50
#define PRESUNTO 100
#define HAMBURGUER 100

int main() {
    int quantSanduiches;

    printf("Digite a quantidade de sanduíches para fazer:\n> ");
    scanf("%d", &quantSanduiches);

    while (quantSanduiches <= 0) {
        printf("Digite uma quantidade válida de sanduíches:\n> ");
        scanf("%d", &quantSanduiches);
    }

    float totalQueijo = quantSanduiches * QUEIJO * 2 / 1000;
    float totalPresunto = quantSanduiches * PRESUNTO / 1000;
    float totalHamburguer = quantSanduiches * HAMBURGUER / 1000;

    printf("\nO total de queijo será %.2f Kg\n", totalQueijo);
    printf("O total de presunto será %.2f Kg\n", totalPresunto);
    printf("O total de hambúrguer será %.2f Kg", totalHamburguer);

    return 0;
}
