#include <stdio.h>

float volume (float raio, float altura){
    
    
    float pi = 3.1414592; 
    float v = pi * (raio * raio) * altura;
    
    return v;
}
    


int main()
{
    float x, y, res;
    
    printf("Digite o raio: ");
    scanf("%f", &x);
    
    printf("Digite a altura: ");
    scanf("%f", &y);
    
    res = volume (x, y); 
    
    printf("O volume do cilindro circular é %.2f ", res);
    

    return 0;
}
