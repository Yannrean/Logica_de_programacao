#include <stdio.h>

int main()
{
  float deposito, taxa_de_juros, rendimento, total;
  
  printf("Deposito: ");
  scanf("%f", &deposito);
  
  printf("Taxa de Juros: ");
  scanf("%f", &taxa_de_juros);
  
  rendimento = deposito * (taxa_de_juros /100);
  printf("Rendimento: %.2f\n", rendimento);
  
  total = deposito + rendimento;
  printf("Valor total: %.2f\n", total);
 
}