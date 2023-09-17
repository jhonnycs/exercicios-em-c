#include <stdio.h>

/*
    Uma determinada fábrica de refrigerantes vende seus produtos em: latas de
    350 ml; garrafa de 600 ml e garrafa de 2 L. Ao receber quantos produtos
    de cada um comerciante comprou, calcular o total de litros comprado.
*/

int main() {
    int quant350ml, quant600ml, quant2L;

    float lata350ml = 0.35;
    float garrafa600ml = 0.6;
    float garrafa2L = 2;

    printf("Digite a quantidade de latas de 350 ml:\n> ");
    scanf("%d", &quant350ml);
    printf("Digite a quantidade de garrafas de 600 ml:\n> ");
    scanf("%d", &quant600ml);
    printf("Digite a quantidade de garrafas de 2L:\n> ");
    scanf("%d", &quant2L);
    

    float totalLitros = quant350ml * lata350ml +
                        quant600ml * garrafa600ml +
                        quant2L * garrafa2L;

    printf("Foram comprados %.2f litros de refrigerante", totalLitros);

    return 0;
}
