#include "moverIzq.h"

void moverIzq(uint8_t* pieza, uint8_t altoPieza){

    // verificamos si algún bit está en el borde izquierdo
    for(int i = 0; i < altoPieza; i++){
        if(pieza[i] & 0b10000000){
            return; // no se puede mover
        }
    }

    // desplazamos los bits a la izquierda
    for(int i = 0; i < altoPieza; i++){
        pieza[i] <<= 1;
    }
}
