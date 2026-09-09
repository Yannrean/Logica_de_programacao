#include <stdio.h>

int main()
{
    int id
    float nota1, nota2, nota3, media, media_aproveitamento;
    int conceito, final;
    
    printf("Digite seu ID: ");
    scanf("%d", &id);
    
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Digite sua média dos exercícios: ");
    scanf("%f", &media);
    
    media_aproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + media) / 7;
    printf("Sua média de aproveitamento é %f", media_aproveitamento);
    
    if(media_aproveitamento >= 9.0){
        printf("Conceito: A\n");
        printf("Aprovado");
    }
    else if(media_aproveitamento >= 7.5 && media_aproveitamento < 9.0){
        printf("Conceito: B\n");
        printf("Aprovado");
    }
    else if(media_aproveitamento >= 6.0 && media_aproveitamento < 7.5){
        printf("Conceito: C");
        printf("Aprovado");
    }
    else if(media_aproveitamento >= 4.0 && media_aproveitamento < 6.0){
        printf("Conceito: D");
        printf("Reprovado");
    }
    else if(media_aproveitamento < 4.0){
        printf("Conceito: E");
        printf("Reprovado");
    }
    else{
        printf("Erro");
    }
    
    return 0;
}
