#ifndef TIPOS_H
#define TIPOS_H

typedef enum
{
    DISTRIBUIDA = -1,
    DOIS = 2,
    TRES = 3,
    QUATRO = 4,
    CINCO = 5,
    SEIS = 6,
    SETE = 7,
    OITO = 8,
    NOVE = 9,
    DEZ = 10,
    J = 11,
    Q = 12,
    K = 13,
    A = 14
}
Numero;

typedef enum
{
    PAUS,
    ESPADAS,
    OUROS,
    COPAS
}
Naipe;

typedef struct
{
    Numero numero;
    Naipe naipe;
}
Carta;

typedef Carta Baralho[52];
typedef Carta Mao[2];
typedef Carta Mesa[5];

#endif //TIPOS_H