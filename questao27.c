#include <stdio.h>
#include <math.h>

/*
    calcular a área de um trapézio
*/

int main() {
    float baseMenor, baseMaior, altura;

    printf("Digite a base menor:\n> ");
    scanf("%f", &baseMenor);

    while (baseMenor <= 0) {
        printf("Digite uma base menor válida:\n> ");
        scanf("%f", &baseMenor);
    }    

    printf("Digite a base maior:\n> ");
    scanf("%f", &baseMaior);

    while (baseMaior <= 0) {
        printf("Digite uma base maior válida:\n> ");
        scanf("%f", &baseMaior);
    }

    printf("Digite a altura:\n> ");
    scanf("%f", &altura);

    while (altura <= 0) {
        printf("Digite uma altura válida:\n> ");
        scanf("%f", &altura);
    }
    
    float area = (baseMenor + baseMaior) * altura / 2;
    
    printf("\nA área do trapézio é %.2f", area);
    
    return 0;
}
