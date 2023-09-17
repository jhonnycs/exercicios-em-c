#include <stdio.h>
#include <math.h>
#define PI 3.14

/* 
    Calcular a área de uma pizza que possui um raio R
    (Definir PI=3.14 como constate)
*/

int main() {
    float R;
    
    printf("Digite o raio da pizza:\n> ");
    scanf("%f", &R);
    
    float area = PI * pow(R, 2);

    printf("\nA área da pizza é: %.2f", area);

    return 0;
}
