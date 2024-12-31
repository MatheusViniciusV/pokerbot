#include <time.h>
#include <stdlib.h>

#include "mesa.h"

void mesa_flop(Baralho baralho, Mesa mesa)
{
    srand(time(NULL));

    for(int i = 0; i < 3; i++)
    {
        int j;

        do
        {
            j = rand() % 52;
        }
        while(baralho[j].numero == DISTRIBUIDA);

        mesa[i] = baralho[j];
        baralho[j].numero = DISTRIBUIDA;
    }
}

void mesa_turn(Baralho baralho, Mesa mesa)
{
    srand(time(NULL));

    int i;

    do
    {
        i = rand() % 52;
    }
    while(baralho[i].numero == DISTRIBUIDA);

    mesa[3] = baralho[i];
    baralho[i].numero = DISTRIBUIDA;
}

void mesa_river(Baralho baralho, Mesa mesa)
{
    srand(time(NULL));

    int i;

    do
    {
        i = rand() % 52;
    }
    while(baralho[i].numero == DISTRIBUIDA);

    mesa[4] = baralho[i];
    baralho[i].numero = DISTRIBUIDA;
}

void mesa_imprime(Mesa mesa)
{
    for(int i = 0; i < 5; i++)
    {
        carta_imprime(mesa[i]);
    }
}