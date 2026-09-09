#include <stdio.h>

int main()
{
    int codigo;
    float prato;
    
    printf("Digiteo código do prato desejado: ");
    scanf("%d", &codigo);
    
    switch (codigo){
        case 1:
          printf("Hambúrguer com fritas - R$28");
          break;
          
        case 2: 
          printf("Filé de frango grelhado - R$32");
          break;
        
        case 3:
          printf("Lasanha à bolonhesa - R$35");
          break;
        
        case 4:
          printf("Filé de peixe com arroz - R$42");
          break;
          
        case 5: 
          printf("Salada especial - R$25");
          break;
          
        default:
          printf("Opção inválida!");
          break;
    }

    return 0;
}
