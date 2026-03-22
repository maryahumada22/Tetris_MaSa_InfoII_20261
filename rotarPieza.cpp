#include "rotarPieza.h"
using namespace std;

void rotarPieza(uint8_t* pieza, short altoPieza){

    uint8_t temp[4] = {0,0,0,0};

    // recorrer matriz 4x4 (máximo)
    for(int i = 0; i < altoPieza; i++){
        for(int j = 0; j < 8; j++){

            uint8_t bit = (pieza[i] >> j) & 0b001;

            if(bit == 1){
                // rotación: (i,j) -> (j, alto-1-i)
                temp[j] |= (1 << (altoPieza - 1 - i));
            }
        }
    }

    // copiar de vuelta
    for(int i = 0; i < altoPieza; i++){
        pieza[i] = temp[i];
    }
}
