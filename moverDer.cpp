#include "moverDer.h"

void moverDer(uint8_t* pieza, uint8_t altoPieza){

    // verificamos si algún bit está en el borde derecho
    for(int i = 0; i < altoPieza; i++){
        if(pieza[i] & 0b00000001){
            return; // no se puede mover
        }
    }

    // desplazamos los bits a la derecha
    for(int i = 0; i < altoPieza; i++){
        pieza[i] >>= 1;
    }
}
