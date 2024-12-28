#include <stdio.h>

#include "funcoes.h"

int main()
{
    Baralho baralho;
    Mao mao;
    
    inicializaBaralho(baralho);
    distribuiMao(baralho, mao);

    printf("BARALHO\n");

    for(int i = 0; i < 52; i++)
    {
        if(baralho[i].numero != DISTRIBUIDA) imprimeCarta(baralho[i]);
    }

    printf("\nMAO\n");

    for(int i = 0; i < 2; i++)
    {
        imprimeCarta(mao[i]);
    }

    return 0;
}