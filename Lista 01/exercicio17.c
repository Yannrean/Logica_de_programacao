#include <stdio.h>

int main()
{
    float deposito; 
    float cheque1, calculo1;
    float cheque2, calculo2;
    float total;
 
    
    printf("Deposite um valor: ");
    scanf("%f", &deposito);
    
   
    printf("Cheque 1: ");
    scanf("%f", &cheque1);
    calculo1 = (0.38 /100) * cheque1;
    
    
    printf("Cheque 2: ");
    scanf("%f", &cheque2);
    calculo2 = (0.38 /100) * cheque2;
    
    total = deposito - (cheque1 + calculo1) - (cheque2 + calculo2);
    printf("Seu total é de %.2f", total);

    return 0;
}