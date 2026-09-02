#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n1, n2, n3, p1, p2, p3, media;
  
  printf("Digite sua n1: ");
  scanf("%f", &n1);
  printf("Digite o peso: ");
  scanf("%f", &p1);
  printf("Digite sua n2: ");
  scanf("%f", &n2);
  printf("Digite o peso: ");
  scanf("%f", &p2);
  printf("Digite sua n3: ");
  scanf("%f", &n3);
  printf("Digite o peso: ");
  scanf("%f", &p3);
  
  
  media = ((n1 *p1) + (n2 *p2) + (n3 *p3)) /(p1 + p2 + p3);
  system("clear");
  
  printf("N1 = %.2f\n", n1);
  printf("Peso = %.2f\n", p1);
  printf("N2 = %.2f\n", n2);
  printf("Peso = %.2f\n", p2);
  printf("N3 = %.2f\n", n3);
  printf("Peso = %.2f\n", p3);
  printf("Media = %.2f\n", media);
}