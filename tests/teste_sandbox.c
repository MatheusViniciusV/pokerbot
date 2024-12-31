#include <stdio.h>
#include <assert.h>

#include "baralho.h"
#include "carta.h"
#include "mao.h"
#include "mesa.h"

void test_geral()
{
    Baralho baralho;
    Mesa mesa;

    baralho_inicializa(baralho);

    for(int i = 0; i < 5; i++)
    {
        mesa[i] = baralho[i];
    }
    

    mesa_imprime(mesa);
}

int main()
{
    printf("SANDBOX:\n");

    test_geral();

    return 0;
}