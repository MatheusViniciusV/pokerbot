#ifndef MESA_H
#define MESA_H

#include "carta.h"
#include "baralho.h"

typedef Carta Mesa[5];

void mesa_flop(Baralho baralho, Mesa mesa);
void mesa_turn(Baralho baralho, Mesa mesa);
void mesa_river(Baralho baralho, Mesa mesa);
void mesa_imprime(Mesa mesa);

#endif // MESA_H