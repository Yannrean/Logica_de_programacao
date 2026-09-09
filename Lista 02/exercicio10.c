#include <stdio.h>

int main()
{
    float altura, peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    float imc = peso / (altura * altura);
    
    if(imc < 18.5){
        printf("Abaixo do peso");
    }
    else if(imc >= 18.5 && imc < 25){
        printf("Peso normal");
    }
    else if(imc >= 25 && imc < 30){
        printf("Acima do peso");
    }
    else if(imc >= 30){
        printf("Obeso");
    }
    else{
        printf("ERRO");
    }
    
    
    return 0;
}