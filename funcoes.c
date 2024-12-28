#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "funcoes.h"

void inicializaBaralho(Baralho baralho)
{
    for(int i = 0; i < 52; i++)
    {
        baralho[i].numero = i % 13 + 2;
        baralho[i].naipe = i / 13;
    }
}

void distribuiMao(Baralho baralho, Mao mao)
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

void imprimeCarta(Carta carta)
{
    const char* numeros[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    const char* naipes[] = {"Paus", "Espadas", "Ouros", "Copas"};

    printf("%s de %s\n", numeros[carta.numero - 2], naipes[carta.naipe]);
}