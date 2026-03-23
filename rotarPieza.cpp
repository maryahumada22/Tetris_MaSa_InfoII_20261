#include "rotarPieza.h"

void rotarPieza(uint8_t* pieza, uint8_t &piezaAlto) {

    // I
    if (piezaAlto == 1 && pieza[0] == 0b11110000) {

        piezaAlto = 4;

        pieza[0] = 0b10000000;
        pieza[1] = 0b10000000;
        pieza[2] = 0b10000000;
        pieza[3] = 0b10000000;

    } else if (piezaAlto == 4 &&
               pieza[0] == 0b10000000 &&
               pieza[1] == 0b10000000 &&
               pieza[2] == 0b10000000 &&
               pieza[3] == 0b10000000) {

        piezaAlto = 1;
        pieza[0] = 0b11110000;
    }

    // O
    else if (piezaAlto == 2 &&
             pieza[0] == 0b00110000 &&
             pieza[1] == 0b00110000) {
        // no hace nada
    }

    // T
    else if (piezaAlto == 2 &&
             pieza[0] == 0b00111000 &&
             pieza[1] == 0b00010000) {

        pieza[0] = 0b00010000;
        pieza[1] = 0b00110000;
        pieza[2] = 0b00010000;
        piezaAlto = 3;

    } else if (piezaAlto == 3 &&
               pieza[0] == 0b00010000 &&
               pieza[1] == 0b00110000 &&
               pieza[2] == 0b00010000) {

        pieza[0] = 0b00010000;
        pieza[1] = 0b00111000;
        piezaAlto = 2;

    } else if (piezaAlto == 2 &&
               pieza[0] == 0b00010000 &&
               pieza[1] == 0b00111000) {

        pieza[0] = 0b00010000;
        pieza[1] = 0b00011000;
        pieza[2] = 0b00010000;
        piezaAlto = 3;

    } else if (piezaAlto == 3 &&
               pieza[0] == 0b00010000 &&
               pieza[1] == 0b00011000 &&
               pieza[2] == 0b00010000) {

        pieza[0] = 0b00111000;
        pieza[1] = 0b00010000;
        piezaAlto = 2;
    }

    // S
    else if (piezaAlto == 2 &&
             pieza[0] == 0b00011000 &&
             pieza[1] == 0b00110000) {

        pieza[0] = 0b00100000;
        pieza[1] = 0b00110000;
        pieza[2] = 0b00010000;
        piezaAlto = 3;

    } else if (piezaAlto == 3 &&
               pieza[0] == 0b00100000 &&
               pieza[1] == 0b00110000 &&
               pieza[2] == 0b00010000) {

        pieza[0] = 0b00011000;
        pieza[1] = 0b00110000;
        piezaAlto = 2;
    }

    // Z
    else if (piezaAlto == 2 &&
             pieza[0] == 0b00110000 &&
             pieza[1] == 0b00011000) {

        pieza[0] = 0b00010000;
        pieza[1] = 0b00110000;
        pieza[2] = 0b00100000;
        piezaAlto = 3;

    } else if (piezaAlto == 3 &&
               pieza[0] == 0b00010000 &&
               pieza[1] == 0b00110000 &&
               pieza[2] == 0b00100000) {

        pieza[0] = 0b00110000;
        pieza[1] = 0b00011000;
        piezaAlto = 2;
    }
}
