#include "baralho.h"

void baralho_inicializa(Baralho baralho)
{
    for(int i = 0; i < 52; i++)
    {
        baralho[i].numero = i % 13 + 2;
        baralho[i].naipe = i / 13;
    }
}

void baralho_imprime(Baralho baralho)
{
    for(int i = 0; i < 52; i++)
    {
        if(baralho[i].numero != DISTRIBUIDA) carta_imprime(baralho[i]);
    }
}