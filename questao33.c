#include <stdio.h>

/*
    Receber o número de horas trabalhadas, o valor do salário mínimo
    e o número de horas extras trabalhadas, calcular o salário sabendo que:
    - a hora trabalhada vale ?% do salário mínimo (não especifica)
    - a hora extra vale 1,4 (acredito ser porcentagem) do salário mínimo
    - o salário bruto são as horas trabalhadas * valor da hora
    - quantida das horas extras = horas extras feitas * valor da extra
    - o salário a receber é o salário bruto + quantia das horas extras
*/

int main() {
    int horasTrabalhadas, horasExtrasTrabalhadas;
    float valorHoraTrabalhada, salarioMinimo;

    printf("Digite a porcentagem do salário mínimo que a hora trabalhada vale:\n> ");
    scanf("%f", &valorHoraTrabalhada);
    // estou solicitando ao usuário porque na questão não diz quanto é

    while (valorHoraTrabalhada <= 0) {
        printf("Digite uma porcentagem válida para o valor da hora trabalhada:\n> ");
        scanf("%f", &valorHoraTrabalhada);        
    }
    
    printf("Digite o número de horas trabalhadas:\n> ");
    scanf("%d", &horasTrabalhadas);

    while (horasTrabalhadas <= 0) {
        printf("Digite um número válido de horas trabalhadas:\n> ");
        scanf("%d", &horasTrabalhadas);        
    }    

    printf("Digite o número de horas extras trabalhadas:\n> ");
    scanf("%d", &horasExtrasTrabalhadas);
    
    while (horasExtrasTrabalhadas < 0) {
        printf("Digite um número válido de horas extras trabalhadas:\n> ");
        scanf("%d", &horasExtrasTrabalhadas);
    }
    
    printf("Digite o valor do salário mínimo:\n> ");
    scanf("%f", &salarioMinimo);

    while (salarioMinimo <= 0) {
        printf("Digite um salário mínimo válido:\n> ");
        scanf("%f", &salarioMinimo);
    }
    
    valorHoraTrabalhada = valorHoraTrabalhada / 100 * salarioMinimo;
    float valorHoraExtra = 0.014 * salarioMinimo;

    float salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    float quantiaHorasExtras = valorHoraExtra * horasExtrasTrabalhadas;

    float salario = salarioBruto + quantiaHorasExtras;

    printf("\nO salário a receber é R$ %.2f", salario);

    return 0;
}
