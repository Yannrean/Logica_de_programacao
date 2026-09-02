#include <stdio.h>

int main()
{
    float numero_pe; 
    float numero_polegada;
    float numero_jarda;
    float numero_milha;
    
    printf("Digite um número: ");
    scanf("%f", &numero_pe);
    
    numero_polegada = numero_pe *12;
    printf("Número em polegadas: %.2f\n", numero_polegada);
    
    numero_jarda = numero_pe /3;
    printf("Número em jardas: %.2f\n", numero_jarda);
    
    numero_milha = numero_jarda /1760;
    printf("Número em milhas: %.2f\n", numero_milha);
    
}