#include <stdio.h>

void pos (int a[500], int b[500]){
    for (int i = 1; i < 500; i++){
        b[i] = a[i] / 15;
    }
}

int main()
{
    int A[500], B[500];
    int i;

    for (i = 0; i < 500; i++){
        A[i] = i * 3;
    }

    pos (A, B);

    for (i = 1; i < 20; i++){
        printf("Cliente %d: %d filmes -> %d locações grátis\n", i, A[i], B[i]);
    }

    return 0;
}