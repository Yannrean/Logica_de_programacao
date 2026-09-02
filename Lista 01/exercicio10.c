#include <stdio.h>

int main()
{
  float raio, pi, area;
  
  
  printf("Raio: ");
  scanf("%f", &raio);
  
  pi = 3.14159265359;
 
  area = (pi * (raio * raio));
  printf("Área: %.2f\n", area);
 
}