#include <stdio.h>

float temp (float f){
    
    float c = (f - 32.0) * (5.00 / 9.00);
    
    return c;
}
    


int main()
{
    float fa, res;
    
    printf("Digite a temperatura: ");
    scanf("%f", &fa);
    
    res = temp (fa); 
    
    printf("A temperatura em Celsius é %.2f ", res);
    

    return 0;
}
