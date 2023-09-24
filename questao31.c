#include <stdio.h>
#include <math.h>

/*
    Receber o ano de nascimento de uma pessoa, e o ano atual.
    Calcular a idade da pessoa em:
    - anos;
    - meses;
    - dias;
    - semanas.
*/

int main() {
    int anoNasc, anoAtual;

    printf("Digite o seu ano de nascimento:\n> ");
    scanf("%d", &anoNasc);
    printf("Digite o ano atual:\n> ");
    scanf("%d", &anoAtual);

    while (anoNasc > anoAtual) {
        printf("\nVocê digitou algum ano errado. Como não é possível\n");
        printf("saber qual foi, peço que você digite os anos novamente:\n\n");
        
        printf("Digite o seu ano de nascimento:\n> ");
        scanf("%d", &anoNasc);
        
        printf("Digite o ano atual:\n> ");
        scanf("%d", &anoAtual);
    }
    
    int idadeAnos = anoAtual - anoNasc;
    int idadeMeses = idadeAnos * 12;
    int idadeDias = idadeAnos * 365;
    float idadeSemanas = idadeDias / (float)7;
    

    printf("\nVocê tem %d anos\n", idadeAnos);
    printf("\nVocê tem %d meses\n", idadeMeses);
    printf("\nVocê tem %d dias\n", idadeDias);
    printf("\nVocê tem %.2f semanas\n", idadeSemanas);
    
    return 0;
}
