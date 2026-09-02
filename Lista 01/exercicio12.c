#include <stdio.h>
#include <math.h>

int main()
{
    int numero1, numero2;
    
    printf("Digite um número: ");
    scanf("%d", &numero1);
    
    if (numero1 <= 0) {
        printf("O número tem que ser maior que 0");
    }    
    else {
        printf("Digite o segundo número: ");
        scanf("%d", &numero2);

    
    int numero;
    
     if (numero2 <= 0) {
        printf("O número tem que ser maior que 0");
    }    
    else {
        numero = pow(numero1, numero2);
        printf("Resultado: %d\n", numero);
    } 
    }
}