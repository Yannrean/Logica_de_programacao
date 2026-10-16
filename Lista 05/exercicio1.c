#include <stdio.h>

int maior (int a, int b){
    
     if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int x, y, res;
    
    printf("Digite um número: ");
    scanf("%d", &x);
    
    printf("Digite outro número: ");
    scanf("%d", &y);
    
    res = maior (x, y);
    
    printf("\nO maior número é %d", res);
    

    return 0;
}
