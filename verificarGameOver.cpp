#include "verificarGameOver.h"

bool verificarGameOver(uint8_t** tablero, unsigned short ancho){
    for(int j=0;j<ancho;j++)
        if(tablero[0][j]!=0) return true;
    return false;
}
