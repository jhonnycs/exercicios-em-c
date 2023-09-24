#include <stdio.h>

/* 
    Calcular quantos litros de gasolina foi abastecido baseado no preço
    do litro e no valor pago
*/

int main() {
    float precoLitro, valorPago;
    
    printf("Quanto você pagou ao abastecer?\n> ");
    scanf("%f", &valorPago);

    while (valorPago <= 0) {
        printf("Digite um valor válido:\n> ");
        scanf("%f", &valorPago);
    }

    printf("Quanto está o litro de gasolina?\n> ");
    scanf("%f", &precoLitro);

    while (precoLitro <= 0) {
        printf("Digite um preço válido para o litro de gasolina:\n> ");
        scanf("%f", &precoLitro);
    }
    
    float litros = valorPago / precoLitro;

    printf("\nVocê abasteceu seu veículo com %.2f litros de gasolina", litros);
    
    return 0;
}
