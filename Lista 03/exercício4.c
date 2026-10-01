#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    
    printf("Digite sua nota: ");
    scanf("%f", &n1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite sua terceira nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    printf("A média aritmética de %.2f + %.2f + %.2f /3 = %.2f", n1, n2, n3, media);

    return 0;
}