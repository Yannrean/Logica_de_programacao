#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, soma;
    
    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);
    printf("N4: ");
    scanf("%d", &n4);
    soma = n1 + n2 + n3 + n4;
    printf("Soma = %.2d", soma);
    

    return 0;
}