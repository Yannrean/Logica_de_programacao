#include <stdio.h>

int main()
{
  float salario, gratificacao, salario_gratificacao, imposto, salario_com_imposto, salario_a_receber;
  
  printf("Digite seu salário: ");
  scanf("%f", &salario);
  
  gratificacao = salario *0.05;
  
  printf("Gratificação: %.2f\n", gratificacao);
  salario_gratificacao = salario + gratificacao;
  
  printf("Salário com a gratificação: %.2f\n", salario_gratificacao);
  imposto = salario * 0.07;
  salario_com_imposto = salario - imposto;
  printf("Salário com imposto: %.2f\n", salario_com_imposto);
  
  salario_a_receber = salario + gratificacao - imposto;
  printf("Salário final: %.2f", salario_a_receber);
  
}