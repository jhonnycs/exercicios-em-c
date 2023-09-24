#include <stdio.h>

/*
    Um tonel de refresco é feito com 8 partes de água e 2 partes de
    suco. Calcular quantos litros de água e refresco serão utilizados
    para fazer a quantidade de resfresco informada pelo usuário.
*/

int main() {
    int quantRefresco;

    printf("Digite a quantidade de refresco a fazer:\n> ");
    scanf("%d", &quantRefresco);

    while (quantRefresco <= 0) {
        printf("Digite uma quantidade válida de refresco:\n> ");
        scanf("%d", &quantRefresco);
    }
    
    float litrosAgua = 0.8 * quantRefresco;
    float litrosSuco = 0.2 * quantRefresco;
    
    printf("\nSerão usados %.2f litros de água e ", litrosAgua);
    printf("%.2f litros de suco", litrosSuco);

    return 0;
}
