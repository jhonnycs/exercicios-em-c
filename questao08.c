#include <stdio.h>

/* 
    Calcular quantos dias se passaram desde o início do ano
    ao receber um dia e um mês quaisquer
*/

int main() {
    int dia, mes;
    
    printf("Informe o dia:\n> ");
    scanf("%d", &dia);
    printf("Informe o mês:\n> ");
    scanf("%d", &mes);

    int diasPassados = (mes - 1) * 30 + dia - 1;

    printf("\nSe passaram %d dias desde o início do ano", diasPassados);

    return 0;
}
