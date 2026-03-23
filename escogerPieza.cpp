#include "escogerPieza.h"
#include <cstdlib>

uint8_t* escogerPieza(uint8_t &altoPieza){

    int tipo = rand() % 5;
    uint8_t* pieza = nullptr;

    switch(tipo){
    case 0: // I
        altoPieza = 4;
        pieza = new uint8_t[4]{0b00010000,0b00010000,0b00010000,0b00010000};
        break;

    case 1: // O
        altoPieza = 2;
        pieza = new uint8_t[2]{0b00110000,0b00110000};
        break;

    case 2: // T
        altoPieza = 2;
        pieza = new uint8_t[2]{0b00111000,0b00010000};
        break;

    case 3: // S
        altoPieza = 2;
        pieza = new uint8_t[2]{0b00011000,0b00110000};
        break;

    case 4: // Z
        altoPieza = 2;
        pieza = new uint8_t[2]{0b00110000,0b00011000};
        break;
    }

    return pieza;
}
