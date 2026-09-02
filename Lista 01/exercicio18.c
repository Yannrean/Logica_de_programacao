#include <stdio.h>

int main()
{
    float racao, calculo, total, consumo_diario_quilogramas; 
    int racao_gato1, racao_gato2;
    
    printf("Saco de ração: ");
    scanf("%f", &racao);
    
    
    printf("Quantidade de ração gato 1 (em gramas): ");
    scanf("%d", &racao_gato1);
    
    printf("Quantidade de ração gato 2 (em gramas): ");
    scanf("%d", &racao_gato2);
    
    consumo_diario_quilogramas = (racao_gato1 + racao_gato2) /1000.0;
    total = racao - (consumo_diario_quilogramas * 5);
    printf("O total de ração daqui a 5 dias será de %.2fKg", total);

    return 0;
}