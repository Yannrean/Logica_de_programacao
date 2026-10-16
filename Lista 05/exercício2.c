#include <stdio.h>

void mes (int n){
    switch (n){
    
    case 1:
     printf("JANEIRO - 31 dias");
     break;
     
    case 2: 
     printf("FEVEREIRO - 28 dias");
     break;
     
    case 3:
     printf("MARÇO - 31 dias");
     break;
     
    case 4:
     printf("ABRIL - 30 dias");
     break;
     
    case 5:  
     printf("MAIO - 31 dias");
     break;
     
    case 6:
     printf("JUNHO - 30 dias");
     break;
     
    case 7:
     printf("JULHO - 31 dias");
     break;
     
    case 8:
     printf("AGOSTO - 31 dias");
     break;
     
    case 9: 
     printf("SETEMBRO - 30 dias");
     break;
     
    case 10:
     printf("OUTUBRO - 31 dias");
     break;
     
    case 11:
     printf("NOVEMBRO - 30 dias");
     break;
     
    case 12: 
     printf("DEZEMBRO - 31 dias");
     break;
     
    default:
     printf("Digite um número entre 1 a 12");
    }
}

int main()
{
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    mes (num); 
    

    return 0;
}
