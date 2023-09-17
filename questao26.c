#include <stdio.h>

/*
    Receber o peso de uma pessoa, em Kg, calcular e mostrar:
    - o peso em gramas
    - o novo peso se a pessoa engordar 15% sobre o peso digitado
    - o novo peso se a pessoa emagrecer 20% sobre o peso digitado
*/

int main() {
    float pesoKg;

    printf("Digite o peso em Kg:\n> ");
    scanf("%f", &pesoKg);
    
    float pesoGramas = pesoKg * 1000;
    float pesoEngordou = pesoKg * 1.15;
    float pesoEmagreceu = pesoKg * 0.8;
    
    printf("\nO peso digitado em gramas é %.0f\n", pesoGramas);
    printf("O novo peso, caso engordes 15%% é %.2f\n", pesoEngordou);
    printf("O novo peso, caso emagreças 20%% é %.2f", pesoEmagreceu);

    return 0;
}
