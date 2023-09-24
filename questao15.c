#include <stdio.h>

/* 
    Ler o total de eleitores de um município, o número de votos brancos,
    nulos e válidos. Calcular o percentual de cada um em relação ao todo
*/

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;

    printf("Digite a quantidade de eleitores do município:\n> ");
    scanf("%d", &totalEleitores);

    while (totalEleitores <= 0) {
        printf("Digite uma quantidade válida de eleitores:\n> ");
        scanf("%d", &totalEleitores);
    }

    printf("Digite a quantidade de votos brancos:\n> ");
    scanf("%d", &votosBrancos);

    while (votosBrancos < 0 || votosBrancos > totalEleitores) {
        printf("Digite uma quantidade válida de votos brancos:\n> ");
        scanf("%d", &votosBrancos);
    }

    printf("Digite a quantidade de votos nulos:\n> ");
    scanf("%d", &votosNulos);

    while (votosNulos < 0 || votosNulos > totalEleitores) {
        printf("Digite uma quantidade válida de votos nulos:\n> ");
        scanf("%d", &votosNulos);
    }

    printf("Digite a quantidade de votos válidos:\n> ");
    scanf("%d", &votosValidos);

    while (votosValidos < 0 || votosValidos > totalEleitores) {
        printf("Digite uma quantidade válida de votos válidos:\n> ");
        scanf("%d", &votosValidos);
    }

    if (totalEleitores == 0) {
        printf("\nNão há eleitores no município");
    } else {
        float porcVotosBrancos = votosBrancos / (float)totalEleitores * 100;
        float porcVotosNulos = votosNulos / (float)totalEleitores * 100;
        float porcVotosValidos = votosValidos / (float)totalEleitores * 100;

        printf("\n%.1f%% do total de eleitores votou branco;\n", porcVotosBrancos);
        printf("%.1f%% do total de eleitores votou nulo;\n", porcVotosNulos);
        printf("%.1f%% do total de eleitores votou branco;\n", porcVotosValidos);
    }    
    return 0;
}
