#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &c);
    
    if( a + b < c){
        printf("A soma de %d e %d é menor que %d", a, b, c);
    }
    else{
        printf("A soma de %d + %d é maior ou igual a %d", a, b, c);
    }

    return 0;
}
