#include <stdio.h>

int main()
{
    float velo_via, velo_carro;
    float percentual;
    
    printf("Digite a velocidade máxima permitida da via: ");
    scanf("%f", &velo_via);
    
    printf("Digite a velocidade registrada no painel do carro: ");
    scanf("%f", &velo_carro);
    
    
    if(velo_carro <= velo_via){
        printf("Não houve infração");
    }
    else{
        percentual = ((velo_carro - velo_via) / velo_via) * 100.0;
        printf("Percentual excedido: %.2f\n", percentual);
        
         if(velo_carro <= velo_via * 1.2){
         printf("Infração média");
        }
        else if(velo_carro <= velo_via * 1.5){
         printf("Infração Grave");
        }
        else{
         printf("Infração Gravissíma");
        }
    }    
    if(velo_carro > 120){
        printf("ALERTA DE VELOCIDADE EXTREMAMENTE ELEVADA");
    }
    
    return 0;
}
