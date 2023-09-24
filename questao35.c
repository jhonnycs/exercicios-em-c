#include <stdio.h>

/*
    Converter um tempo dado em minutos para horas, minutos e segundos
    Ex: 145.87 min = 2 h 25 min. 52.2 s
*/

int main() {
    float tempo;

    printf("Digite o tempo em minutos:\n> ");
    scanf("%f", &tempo);

    while (tempo < 0) {
        printf("Digite um tempo válido:\n> ");
        scanf("%f", &tempo);
    }
    
    int horas = (int)tempo / 60;
    int minutos = (int)tempo % 60;
    float segundos = (tempo - (horas * 60) - minutos)*60;
    
    printf("\n%.2f min equivalem a %d h, ", tempo, horas);
    printf("%d min, %.1f s", minutos, segundos);

    return 0;
}
