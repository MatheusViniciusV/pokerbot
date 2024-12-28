#include <time.h>
#include <stdlib.h>

#include "mao.h"

void mao_inicializa(Baralho baralho, Mao mao)
{
    srand(time(NULL));

    for(int i = 0; i < 2; i++)
    {
        int j;

        do
        {
            j = rand() % 52;
        }
        while(baralho[j].numero == DISTRIBUIDA);

        mao[i] = baralho[j];
        baralho[j].numero = DISTRIBUIDA;
    }
}

void mao_imprime(Mao mao)
{
    for(int i = 0; i < 2; i++)
    {
        carta_imprime(mao[i]);
    }
}