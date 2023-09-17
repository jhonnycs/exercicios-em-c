#include <stdio.h>

/* 
    Ler o total de eleitores de um município, o número de votos brancos,
    nulos e válidos. Calcular o percentual de cada um em relação ao todo
*/

int main() {
    int totalEleitores, votosBrancos, votosNulos, votosValidos;

    printf("Digite a quantidade de eleitores do município:\n> ");
    scanf("%d", &totalEleitores);
    printf("Digite a quantidade de votos brancos:\n> ");
    scanf("%d", &votosBrancos);
    printf("Digite a quantidade de votos nulos:\n> ");
    scanf("%d", &votosNulos);
    printf("Digite a quantidade de votos válidos:\n> ");
    scanf("%d", &votosValidos);

    float porcVotosBrancos = votosBrancos / (float)totalEleitores * 100;
    float porcVotosNulos = votosNulos / (float)totalEleitores * 100;
    float porcVotosValidos = votosValidos / (float)totalEleitores * 100;

    printf("\n%.1f%% do total de eleitores votou branco;\n", porcVotosBrancos);
    printf("%.1f%% do total de eleitores votou nulo;\n", porcVotosNulos);
    printf("%.1f%% do total de eleitores votou branco;\n", porcVotosValidos);
    
    return 0;
}
