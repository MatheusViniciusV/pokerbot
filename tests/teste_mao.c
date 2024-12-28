#include <stdio.h>
#include <assert.h>

#include "mao.h"
#include "baralho.h"

void test_mao_inicializa()
{
    Baralho baralho;
    Mao mao;

    baralho_inicializa(baralho);

    mao_inicializa(baralho, mao);

    assert(mao[0].numero >= 2 && mao[0].numero <= 14);
    assert(mao[1].numero >= 2 && mao[1].numero <= 14);

    assert(baralho[mao[0].numero - 2 + mao[0].naipe * 13].numero == DISTRIBUIDA);
    assert(baralho[mao[1].numero - 2 + mao[1].naipe * 13].numero == DISTRIBUIDA);

    printf("mao_inicializa OK\n");
}

int main()
{
    test_mao_inicializa();

    return 0;
}