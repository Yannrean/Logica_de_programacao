#include <stdio.h>

int main()
{
    int ano, ano_atual, idade, anos;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    idade = ano_atual - ano;
    printf("Você tem %d anos\n", idade);
    
    anos = 2050 - ano;
    printf("Você terá %d anos em 2050\n", anos);
}