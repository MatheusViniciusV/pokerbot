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

    for(int i = 0; i < 5; i++)
    {
        mesa[i] = baralho[i];
    }

    mesa_imprime(mesa);

    return 0;
}