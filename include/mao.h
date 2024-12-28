#ifndef MAO_H
#define MAO_H

#include "carta.h"
#include "baralho.h"

typedef Carta Mao[2];

void mao_inicializa(Baralho baralho, Mao mao);
void mao_imprime(Mao mao);

#endif // MAO_H