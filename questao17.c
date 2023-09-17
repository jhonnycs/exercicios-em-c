#include <stdio.h>

/* 
    Converter uma temperatura dada em Celsius para Fahrenheit
*/

int main() {
    float celsius;

    printf("Digite a temperatura em Celsius:\n> ");
    scanf("%f", &celsius);

    float fahrenheit = 9 * celsius / 5 + 32;

    printf("\n%.1f °C equivale a %.1f °F", celsius, fahrenheit);

    return 0;
}
