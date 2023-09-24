#include <stdio.h>
#include <math.h>

/*
    Converter um dinheiro em reais para dólares, marco alemão e
    libra esterlina.
    dolar = R$ 5.65
    marco alemão = R$ 3.27
    libra esterlina = R$ 7.48
*/

int main() {
    float valorReal;

    printf("Digite o valor em reais:\n> ");
    scanf("%f", &valorReal);

    while (valorReal <= 0) {
        printf("Digite um valor válido:\n> ");
        scanf("%f", &valorReal);
    }
    
    
    float valorDolar = valorReal / 5.65;
    float valorMarcoAlemao = valorReal / 3.27;
    float valorLibra = valorReal / 7.48;
    
    printf("\nO valor em dólares é R$ %.2f", valorDolar);
    printf("\nO valor em marco alemão é R$ %.2f", valorMarcoAlemao);
    printf("\nO valor em libras esterlinas é R$ %.2f", valorLibra);

    return 0;
}
