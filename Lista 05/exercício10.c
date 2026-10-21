#include <stdio.h>
#include <time.h>

void idade (int dn, int mn, int an, int dh, int mh, int ah){
    int dias, meses, anos;
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    dias  = dh - dn;
    meses = mh - mn;
    anos  = ah - an;

    if (dias < 0){
        meses--;
        int mesAnterior = (mh == 1) ? 12 : mh - 1;
        dias = dias + diasMes[mesAnterior - 1];
    }

    if (meses < 0){
        anos--;
        meses = meses + 12;
    }

    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
}

int main()
{
    int dn, mn, an;
    int dh, mh, ah;

    printf("Digite sua data de nascimento: ");
    scanf("%d %d %d", &dn, &mn, &an);


    time_t t = time(NULL);
    struct tm *hoje = localtime(&t);
    dh = hoje->tm_mday;
    mh = hoje->tm_mon + 1;
    ah = hoje->tm_year + 1900;

    idade (dn, mn, an, dh, mh, ah);

    return 0;
}