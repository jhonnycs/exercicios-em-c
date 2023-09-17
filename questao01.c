#include <stdio.h>
/* 
    Escreva um algoritmo que armazene o valor 10 em uma variável A
    e o valor 20 em uma variável B. A seguir (utilizando apenas
    atribuições entre variáveis), troque os seus conteúdos fazendo
    com que o valor que está em A passe para B e vice-versa. Ao final,
    escrever os valores que ficaram armazenados nas variáveis.
*/

int main() {
    int A = 10;
    int B = 20;
    int C;

    C = A;
    A = B;
    B = C;

    printf("\nO valor de A é %d\n", A);
    printf("O valor de B é %d", B);
    
    return 0;
}
