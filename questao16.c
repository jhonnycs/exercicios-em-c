#include <stdio.h>

/* 
    Uma lanchonete vende um tipo de sanduíche cujo recheio inclui
    duas fatias de queijo, uma de presunto e uma rodela de hambúrguer.
    As fatias de queijo e de presunto pesam 50 gramas, e a rodela de
    hambúrguer pesa 100 gramas. Calcular as quantidades (em quilos) de
    quejo, presunto e carne para comprar.
*/

int main() {
    int quantSanduiches;

    printf("Digite a quantidade de sanduíches para fazer:\n> ");
    scanf("%d", &quantSanduiches);

    float queijo = 50;
    float presunto = 50;
    float hamburguer = 100;

    float totalQueijo = quantSanduiches * queijo * 2 / 1000;
    float totalPresunto = quantSanduiches * presunto / 1000;
    float totalHamburguer = quantSanduiches * hamburguer / 1000;

    printf("\nO total de queijo será %.2f Kg\n", totalQueijo);
    printf("O total de presunto será %.2f Kg\n", totalPresunto);
    printf("O total de hambúrguer será %.2f Kg", totalHamburguer);

    return 0;
}
