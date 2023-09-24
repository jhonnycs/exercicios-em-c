#include <stdio.h>

/*
    Uma confecção produz X blusas de lã e para isto gasta certa quantidade 
    de novelos. Calcular quantos novelos de lã ela gasta por blusa.
*/

int main() {
    int quantBlusas, quantNovelos;

    printf("Digite a quantidade de blusas:\n> ");
    scanf("%d", &quantBlusas);

    while (quantBlusas <= 0) {
        printf("Digite uma quantidade válida de blusas:\n> ");
        scanf("%d", &quantBlusas);
    }

    printf("Digite a quantidade de novelos a serem usados:\n> ");
    scanf("%d", &quantNovelos);

    while (quantNovelos <= 0) {
        printf("Digite uma quantidade válida de novelos:\n> ");
        scanf("%d", &quantNovelos);
    }

    float novelosPorBlusa = quantNovelos / (float)quantBlusas;

    printf("\nCada blusa usa um total de %.2f novelos", novelosPorBlusa);

    return 0;
}
