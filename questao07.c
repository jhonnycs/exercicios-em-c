#include <stdio.h>

/* 
    Calcular e exibir o preço de um prato montado pelo cliente em um
    restaurante, sabendo o peso do prato, considerando que o preço do quilo
    é R$ 32.00
*/

int main() {
    float precoQuilo = 32;
    float peso;
    
    printf("Quanto está pesando seu prato?\n> ");
    scanf("%f", &peso);

    float precoAPagar = precoQuilo * peso;

    printf("\nVocê terá que pagar R$ %.2f", precoAPagar);

    return 0;
}
