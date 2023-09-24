#include <stdio.h>

/*
    Uma determinada fábrica de refrigerantes vende seus produtos em: latas de
    350 ml; garrafa de 600 ml e garrafa de 2 L. Ao receber quantos produtos
    de cada um comerciante comprou, calcular o total de litros comprado.
*/

#define LATA_350ML 0.35
#define GARRAFA_600ML 0.6
#define GARRAFA_2L 2

int main() {
    int quant350ml, quant600ml, quant2L;

    printf("Digite a quantidade de latas de 350 ml:\n> ");
    scanf("%d", &quant350ml);

    while (quant350ml < 0) {
        printf("Digite uma quantidade válida de latas de 350 ml:\n> ");
        scanf("%d", &quant350ml);        
    }
    
    printf("Digite a quantidade de garrafas de 600 ml:\n> ");
    scanf("%d", &quant600ml);

    while (quant600ml < 0) {
        printf("Digite uma quantidade válida de garrafas de 600 ml:\n> ");
        scanf("%d", &quant600ml);
    }
    
    printf("Digite a quantidade de garrafas de 2L:\n> ");
    scanf("%d", &quant2L);

    while (quant2L < 0) {
        printf("Digite uma quantidade válida de garrafas de 2L:\n> ");
        scanf("%d", &quant2L);
    }

    float totalLitros = quant350ml * LATA_350ML +
                        quant600ml * GARRAFA_600ML +
                        quant2L * GARRAFA_2L;

    printf("\nForam comprados %.2f litros de refrigerante", totalLitros);

    return 0;
}
