#include <stdio.h>

/* 
    Calcular e exibir o preço de um prato montado pelo cliente em um
    restaurante, sabendo o peso do prato, considerando que o preço do quilo
    é R$ 32.00
*/

#define PRECO_QUILO 32

int main() {
    float peso;
    
    printf("Quanto está pesando seu prato?\n> ");
    scanf("%f", &peso);

    while (peso <= 0) {
        printf("Digite um peso válido:\n> ");
        scanf("%f", &peso);
    }    

    float precoAPagar = PRECO_QUILO * peso;

    printf("\nVocê terá que pagar R$ %.2f", precoAPagar);

    return 0;
}
