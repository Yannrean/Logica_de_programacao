#include <stdio.h>

int main()
{
    float raio, pi, area;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    pi = 3.14159;
    area = pi * (raio * raio);
    
    printf("A área do círculo é %.2f" , area);

    return 0;
}