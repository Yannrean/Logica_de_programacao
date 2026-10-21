#include <stdio.h>

int menu (){
    int decisao;
    
    printf("\n----------OPÇÕES PARA PAGAMENTO----------");
    printf("\n1 - A vista 10%% de desconto");
    printf("\n2 - 2x valor da etiqueta");
    printf("\n3 - 3x a 10x com 3%% de juros\n");
    scanf("%d", &decisao);
    
    return decisao;
}

float opcao1 (float total){
    float final = total * 0.90;
    
    return final;
} 

float opcao2 (float parcela){
    float final2 = parcela / 2;
    
    return final2;
}

float opcao3 (float total2, int parcelas){
    float final3 = total2 * (1 + 0.03 * parcelas);
    
    return final3;
}
    


int main()
{
    float res, res1, res2, res3;
    int opcao, vezes;
    
    
    printf("Digite o total gasto na loja: ");
    scanf("%f", &res);
    
    opcao = menu();
    
    switch (opcao){
        case 1: 
         res1 = opcao1(res);
         printf("Total da prestação ficou %.2f", res1);
         break;
         
        case 2: 
         res2 = opcao2(res);
         printf("O valor das parcelas é de %.2f", res2);
         break;
         
        case 3:
         printf("\nQuantas vezes? ");
         scanf("%d", &vezes);
         if(res > 100 && vezes >= 3 && vezes <= 10){
             res3 = opcao3(res, vezes);
             printf("\nTotal da prestação ficou %.2f", res3);
         } else {
             printf("\nDigite um número de parcelas entre 3 a 10");
         } break;
    }
    
    return 0;
}