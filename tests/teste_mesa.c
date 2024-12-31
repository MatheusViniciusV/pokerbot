#include <stdio.h>
#include <assert.h>

#include "mesa.h"
#include "baralho.h"

void test_mesa_flop()
{
    Baralho baralho;
    Mesa mesa;

    baralho_inicializa(baralho);
    mesa_flop(baralho, mesa);

    for (int i = 0; i < 3; i++)
    {
        assert(mesa[i].numero >= 2 && mesa[i].numero <= 14);
        assert(mesa[i].naipe >= 0 && mesa[i].naipe <= 3);
        assert(baralho[mesa[i].numero - 2 + mesa[i].naipe * 13].numero == DISTRIBUIDA);
    }

    printf("mesa_flop OK\n");
}

void test_mesa_turn()
{
    Baralho baralho;
    Mesa mesa;

    baralho_inicializa(baralho);
    mesa_turn(baralho, mesa);

    assert(mesa[3].numero >= 2 && mesa[3].numero <= 14);
    assert(mesa[3].naipe >= 0 && mesa[3].naipe <= 3);
    assert(baralho[mesa[3].numero - 2 + mesa[3].naipe * 13].numero == DISTRIBUIDA);

    printf("mesa_turn OK\n");
}

void test_mesa_river()
{
    Baralho baralho;
    Mesa mesa;

    baralho_inicializa(baralho);
    mesa_river(baralho, mesa);

    assert(mesa[4].numero >= 2 && mesa[4].numero <= 14);
    assert(mesa[4].naipe >= 0 && mesa[4].naipe <= 3);
    assert(baralho[mesa[4].numero - 2 + mesa[4].naipe * 13].numero == DISTRIBUIDA);

    printf("mesa_river OK\n");
}

int main()
{
    test_mesa_flop();
    test_mesa_turn();
    test_mesa_river();

    return 0;
}