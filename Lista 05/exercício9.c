#include <stdio.h>

void troca (int M[61][10]){
    int i, j;

    for (j = 0; j < 10; j++){
        M[60][j] = 0;
        for (i = 0; i < 60; i++){
            M[60][j] = M[60][j] + M[i][j];
        }
    }
}

int main()
{
    int M[61][10], i, j;

    for (i = 0; i < 60; i++){
        for (j = 0; j < 10; j++){
            M[i][j] = 1;
        }
    }

    troca (M);

    for (j = 0; j < 10; j++){
        printf("Coluna %d: %d\n", j + 1, M[60][j]);
    }

    return 0;
}