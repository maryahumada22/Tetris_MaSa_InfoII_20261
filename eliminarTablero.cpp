#include "eliminarTablero.h"

void eliminarTablero(uint8_t** tablero, unsigned short filas){
    for(int i=0;i<filas;i++) delete[] tablero[i];
    delete[] tablero;
}
