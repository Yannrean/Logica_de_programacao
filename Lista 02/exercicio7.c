#include <stdio.h>

int main()
{
    int num, resultado;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        resultado = num + 5;
    }
    else{
       resultado = num + 8;
    }
    printf("O resultado é %d", resultado);
    
    return 0;
}
