#include <stdio.h>

int main()
{
    float preco, precoFinal;
    int opcao;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    printf("--- CONDICOES DE PAGAMENTO ---\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (15%% de desconto)\n");
    printf("3 - Em 2x sem juros\n");
    printf("4 - Em 2x com 10%% de juros\n");
    printf("Escolha a opcao (1 a 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            precoFinal = preco - (preco * 0.10);
            printf("Total a pagar: R$%.2f", precoFinal);
            break;

        case 2:
            precoFinal = preco - (preco * 0.15);
            printf("Total a pagar: R$%.2f", precoFinal);
            break;

        case 3:
            precoFinal = preco;
            printf("Total a pagar: R$%.2f (2x de R$ %.2f)", precoFinal, precoFinal / 2);
            break;

        case 4:
            precoFinal = preco + (preco * 0.10);
            printf("Total a pagar: R$%.2f (2x de R$ %.2f)", precoFinal, precoFinal / 2);
            break;

        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}