#include <stdio.h>

int main()
{
    float preco_fabrica, lucro_distribuidor, percentual_imposto, impostos, lucro, preco_final;
    
    printf("Digite o preço de fábrica de um veículo: ");
    scanf("%f", &preco_fabrica);
    
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &lucro_distribuidor);
    
    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentual_imposto);
    
    lucro = preco_fabrica * (lucro_distribuidor /100);
    printf("Lucro distribuidor: %.2f\n", lucro);
    
    impostos = preco_fabrica * (percentual_imposto/100);
    printf("Impostos: %.2f\n", percentual_imposto);
    
    preco_final = preco_fabrica + lucro + percentual_imposto;
    printf("Preço final: %.2f\n", preco_final);

}