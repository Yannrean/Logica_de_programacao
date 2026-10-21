#include <stdio.h>

void trocas (int A[10][10]){
    int aux, i, j;

    for (j = 0; j < 10; j++){
        aux = A[1][j];
        A[1][j] = A[7][j];
        A[7][j] = aux;
    }

    for (i = 0; i < 10; i++){
        aux = A[i][3];
        A[i][3] = A[i][9];
        A[i][9] = aux;
    }

    for (i = 0; i < 10; i++){
        aux = A[i][i];
        A[i][i] = A[i][9 - i];
        A[i][9 - i] = aux;
    }

    for (j = 0; j < 10; j++){
        aux = A[4][j];
        A[4][j] = A[j][9];
        A[j][9] = aux;
    }
}

int main()
{
    int A[10][10], i, j;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            A[i][j] = i * 10 + j;
        }
    }

    trocas (A);

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}