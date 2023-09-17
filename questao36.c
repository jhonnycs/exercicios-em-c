#include <stdio.h>
#include <math.h>

/*
    Receber a altura, largura e comprimento da bagagem do usuário
    (em centímetros) e calcular o perímetro em centrímetros e polegadas
    1 polegada = 2.54cm
*/

int main() {
    float altura, largura, comprimento;
    int pol = 2.54;

    printf("Digite a altura da mala (em centrímetros):\n> ");
    scanf("%f", &altura);
    printf("Digite o comprimento da mala (em centrímetros):\n> ");
    scanf("%f", &comprimento);
    printf("Digite a largura da mala (em centrímetros):\n> ");
    scanf("%f", &largura);
    
    float perimetro = altura*4 + largura*4 + comprimento*4;
    float perimetroPol = perimetro / pol;
    
    printf("\nO perímetro da mala, em centrímetros, é %.2f cm", perimetro);
    printf("\nO perímetro da mala, em polegadas, é %.2f pol", perimetroPol);

    return 0;
}
