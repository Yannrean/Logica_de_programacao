#include <stdio.h>

int main()
{
    float horas, salario_minimo, valor_hora, salario_bruto, imposto, salario_liquido;
    
    printf("Digite suas horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("Digite seu salário mínimo: ");
    scanf("%f", &salario_minimo);
    
    valor_hora = salario_minimo /2;
    salario_bruto = horas * horas_trabalhadas;
    imposto = salario_bruto * 0.03;
    salario_liquido = salario_bruto - imposto;
    
    printf("O salário a receber é: %.2f\n", salario_liquido);

}