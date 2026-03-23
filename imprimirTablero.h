#ifndef IMPRIMIRTABLERO_H
#define IMPRIMIRTABLERO_H

#include <cstdint>

void imprimirTablero(uint8_t** tablero,
                     uint8_t* pieza,
                     unsigned short filas,
                     unsigned short ancho,
                     uint8_t altoPieza,
                     int px, int py);

#endif
