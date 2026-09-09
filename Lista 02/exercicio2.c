#include <stdio.h>

int main()
{
     char nome[10], sexo, estadoCivil;
     int tempo;
     
     printf("Digite o seu nome: ");
     scanf("%s", nome);
    
     
     printf("Digite o sexo M/F: ");
     scanf(" %c", &sexo);
     
     printf("Digite o estado Civil C/S: ");
     scanf(" %c", &estadoCivil);
     
     if((sexo == 'F' || sexo == 'f') && (estadoCivil == 'C' || estadoCivil == 'c')){
         printf("Digite o total de anos de casamento: ");
         scanf("%d", &tempo);
    }
    
    

    return 0;
}
