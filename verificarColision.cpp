#include "verificarColision.h"

bool verificarColision(uint8_t** tablero,
                       uint8_t* pieza,
                       int px, int py,
                       int filas,
                       uint8_t altoPieza){

    if(py + altoPieza >= filas) return true;

    for(int i=0;i<altoPieza;i++){
        if((pieza[i] & tablero[py+i+1][px]) != 0){
            return true;
        }
    }

    return false;
}
