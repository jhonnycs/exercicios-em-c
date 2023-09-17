#include <stdio.h>
#include <math.h>

/* 
    Calcular a distância entre dois pontos
*/

int main() {
    float xA, xB, yA, yB, d;
    
    printf("Digite a coordenada x do ponto A:\n> ");
    scanf("%f", &xA);
    printf("Digite a coordenada y do ponto A:\n> ");
    scanf("%f", &yA);
    printf("Digite a coordenada x do ponto B:\n> ");
    scanf("%f", &xB);
    printf("Digite a coordenada y do ponto B:\n> ");
    scanf("%f", &yB);

    d = pow((xB - xA), 2) + pow((yB - yA), 2);
    d = sqrt(d);
    
    printf("\nA distância entre os pontos A(%.1f, %.1f) e ", xA, yA);
    printf("B(%.1f, %.1f) é %.2f", xB, yB, d);

    return 0;
}
