#include <stdio.h>

int main()
{
    float altura;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo F/M: ");
    scanf(" %c", &sexo);
    
    if(sexo == 'f' || sexo == 'F'){
        float peso_idealF = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f", peso_idealF);
    }
    else if( sexo == 'm' || sexo == 'M'){
         float peso_idealM = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f", peso_idealM);
    }
    else{
        printf("Erro");
    }

    return 0;
}