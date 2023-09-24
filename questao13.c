#include <stdio.h>

/* 
    Ler um número inteiro e imprimir, na saída:
    CENTENA = x DEZENA = y UNIDADE = z
*/

int main() {
    int num;
    
    printf("Digite um número inteiro de até 3 dígitos:\n> ");
    scanf("%d", &num);

    while (num < -999 || num > 999) {
        printf("Por favor, digite um número válido (inteiro de até 3 dígitos):\n> ");
        scanf("%d", &num);
    }
    

    int centena = num / 100;
    int dezena = num % 100 / 10;
    int unidade = num % 100 % 10;

    printf("\nCENTENA = %d, ", centena);
    printf("DEZENA = %d, ", dezena);
    printf("UNIDADE = %d", unidade);

    return 0;
}
