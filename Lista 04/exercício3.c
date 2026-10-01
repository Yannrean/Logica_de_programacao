#include <stdio.h>

int main()
{
    int num1, num2;
    float soma, sub, mult, divi;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divi = num1 / num2;
    
    printf("%d + %d = %.2f", num1, num2, soma);
    printf("\n%d - %d = %.2f", num1, num2, sub);
    printf("\n%d x %d = %.2f", num1, num2, mult);
    printf("\n%d / %d = %.2f", num1, num2, divi);

    return 0;
}