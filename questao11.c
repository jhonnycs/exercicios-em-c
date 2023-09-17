#include <stdio.h>

/* 
    Converter um dado tempo em dias para anos, meses e dias
*/

int main() {
    int diasT, anos, meses, dias;
    
    printf("Digite quantos dias se passaram:\n> ");
    scanf("%d", &diasT);
    
    anos = diasT / 365;
    meses = diasT % 365 / 30;
    dias = diasT % 365 % 30;

    printf("\nSe passaram %d anos, %d meses e %d dias", anos, meses, dias);

    return 0;
}
