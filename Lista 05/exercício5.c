#include <stdio.h>

float volume (float raio){
    
    
    float pi = 3.1414592; 
    float v = (4.00 / 3.00) * pi * (raio * raio * raio);
    
    return v;
}
    


int main()
{
    float x, res;
    
    printf("Digite o raio: ");
    scanf("%f", &x);
    
    
    res = volume (x); 
    
    printf("O volume da esfera é %.2f ", res);
    

    return 0;
}
