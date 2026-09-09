#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    
    printf("Digite outro número: ");
    scanf("%d", &b);
    
    if(a == b){
        c = a + b;
    }
    else{
        c = a * b;
    }
    printf("O resultado de C é %d", c);

    return 0;
}
