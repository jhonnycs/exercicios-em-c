#include <stdio.h>

/*
    Receber a altura, largura e comprimento da bagagem do usuário
    (em centímetros) e calcular o perímetro em centrímetros e polegadas
    1 polegada = 2.54cm
*/

#define POL 2.54

int main() {
    float altura, largura, comprimento;

    printf("Digite a altura da mala (em centrímetros):\n> ");
    scanf("%f", &altura);

    while (altura <= 0) {
        printf("Digite uma altura válida:\n> ");
        scanf("%f", &altura);        
    }
    
    printf("Digite o comprimento da mala (em centrímetros):\n> ");
    scanf("%f", &comprimento);

    while (comprimento <= 0) {
        printf("Digite um comprimento válido:\n> ");
        scanf("%f", &comprimento);
    }
    
    printf("Digite a largura da mala (em centrímetros):\n> ");
    scanf("%f", &largura);

    while (largura <= 0) {
        printf("Digite uma largura válida:\n> ");
        scanf("%f", &largura);        
    }
    
    
    float perimetro = altura*4 + largura*4 + comprimento*4;
    float perimetroPol = perimetro / POL;
    
    printf("\nO perímetro da mala, em centrímetros, é %.2f cm", perimetro);
    printf("\nO perímetro da mala, em polegadas, é %.2f pol", perimetroPol);

    return 0;
}
