#include <stdio.h>
#include <assert.h>

#include "baralho.h"

void test_baralho_inicializa()
{
    Baralho baralho;

    baralho_inicializa(baralho);

    for (int i = 0; i < 52; i++)
    {
        assert(baralho[i].numero >= 2 && baralho[i].numero <= 14);
        assert(baralho[i].naipe >= 0 && baralho[i].naipe <= 3);
    }

    printf("baralho_inicializa OK\n");
}

int main()
{
    test_baralho_inicializa();
    
    return 0;
}