#include <stdio.h>

/* 
    Calcular a idade da pessoa em dias baseando-se na idade
    em anos da pessoa.
*/

int main() {
    int idade;
    
    printf("Quantos anos você tem?\n> ");
    scanf("%d", &idade);

    int idadeEmDias = idade * 365;

    printf("Você já viveu pouco mais de %d dias", idadeEmDias);
    
    return 0;
}