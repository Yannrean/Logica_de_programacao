#include <stdio.h>

int main()
{
    int valor1, valor2;
    
    printf("Digite um valor: ");
    scanf("%d", &valor1);
    
    printf("Digite outro valor: ");
    scanf("%d", &valor2);
    
    if(valor1 == 1 && valor2 == 1){
        printf("Os dois valores são VERDADEIROS");
    }
    else if(valor1 == 0 && valor2 == 0){
        printf("Os dois valores são FALSOS");
    }
    else{
        printf("Os valores são diferentes");
    }
    
    return 0;
}
