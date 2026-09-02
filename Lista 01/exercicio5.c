#include <stdio.h>

int main()
{
  float salario, aumento, novo_salario;
  
  printf("Digite seu salário: ");
  scanf("%f", &salario);
  printf("Digite seu aumento salarial: ");
  scanf("%f", &aumento);
  aumento = salario * (aumento /100);
  printf("Seu aumento foi de: %.2f\n", aumento);
  novo_salario = salario + aumento;
  printf("Salário com aumento: %.2f", novo_salario);
  
}
