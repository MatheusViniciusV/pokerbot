#include "mesa.h"

void mesa_imprime(Mesa mesa)
{
    for(int i = 0; i < 5; i++)
    {
        carta_imprime(mesa[i]);
    }
}