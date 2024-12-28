#include <stdio.h>

#include "carta.h"

void carta_imprime(Carta carta)
{
    const char* numeros[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    const char* naipes[] = {"Paus", "Espadas", "Ouros", "Copas"};

    printf("%s de %s\n", numeros[carta.numero - 2], naipes[carta.naipe]);
}