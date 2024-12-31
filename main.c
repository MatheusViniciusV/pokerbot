#include <stdio.h>

#include "baralho.h"
#include "carta.h"
#include "mao.h"
#include "mesa.h"

int main()
{
    Baralho baralho;
    Mesa mesa;

    baralho_inicializa(baralho);
    mesa_flop(baralho, mesa);
    mesa_turn(baralho, mesa);
    mesa_river(baralho, mesa);
    mesa_imprime(mesa);

    return 0;
}