#include <stdio.h>

int main()
{
    int numero, resultado;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if(numero >= 0){
        resultado= numero * 2;
    }
    else{
        resultado = numero * 3;
    }
    printf("O resultado é %d", resultado);
    
    return 0;
}
