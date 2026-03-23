#include "crearTablero.h"

uint8_t** crearTablero(unsigned short filas, unsigned short ancho){

    uint8_t** tablero = new uint8_t*[filas];

    for(int i = 0; i < filas; i++){
        tablero[i] = new uint8_t[ancho];
        for(int j = 0; j < ancho; j++){
            tablero[i][j] = 0;
        }
    }

    return tablero;
}
