#include <stdio.h>
#include <math.h>

/* 
    Calcular a área de uma pizza que possui um raio R
    (Definir PI=3.14 como constate)
*/

#define PI 3.14

int main() {
    float R;
    
    printf("Digite o raio da pizza:\n> ");
    
    scanf("%f", &R);

    while (R <= 0) {
        if (R < 0) {
            printf("%.2f não é um raio válido, pois é negativo\n", R);
        } else {
            printf("%.2f não é um raio válido, pois é igual a zero\n", R);
        }

        printf("Digite um raio válido (positivo):\n> ");
        scanf("%f", &R);
    }
    
    float area = PI * pow(R, 2);

    printf("\nA área da pizza é: %.2f", area);

    return 0;
}
