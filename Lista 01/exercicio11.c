#include <stdio.h>
#include <math.h>

int main()
{
  int numero;
  int numero_ao_quadrado, numero_ao_cubo; 
  double raiz_quadrada, raiz_cubica;
  
  
  printf("Digite um número: ");
  scanf("%d", &numero);
  
  if (numero > 0) {
     numero_ao_quadrado = pow(numero, 2);
     printf("Número ao quadrado: %d\n", numero_ao_quadrado);
      
     numero_ao_cubo = pow(numero, 3);
     printf("Número ao cubo: %d\n", numero_ao_cubo);
     
     raiz_quadrada = sqrt(numero);
     printf("Raiz quadrada: %.2f\n", raiz_quadrada);
     
     raiz_cubica = cbrt(numero);
     printf("Raiz cubica: %.2f\n", raiz_cubica);
    } 
    else {
        printf("O número não é maior que 0.\n");
    }
}