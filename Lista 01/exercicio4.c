#include <stdio.h>

int main()
{
  float salario, aumento, soma;
  
  printf("Digite seu salário: ");
  scanf("%f", &salario);
  aumento = salario * 0.25;
  printf("Seu aumento foi de: %.2f\n", aumento);
  soma = salario + aumento;
  printf("Salário com aumento: %.2f", soma);
  
}