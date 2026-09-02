#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n1, n2, n3, media;
  
  printf("Digite sua n1: ");
  scanf("%f", &n1);
  printf("Digite sua n2: ");
  scanf("%f", &n2);
  printf("Digite sua n3: ");
  scanf("%f", &n3);
  media = (n1 + n2 + n3) /3;
  system("clear");
  
  printf("N1 = %.2f\n", n1);
  printf("N2 = %.2f\n", n2);
  printf("N3 = %.2f\n", n3);
  printf("Media = %.2f\n", media);
}