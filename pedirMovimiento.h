#ifndef PEDIRMOVIMIENTO_H
#define PEDIRMOVIMIENTO_H

#include <cstdint>

void pedirMovimiento(uint8_t** tablero,
                     uint8_t* pieza,
                     uint8_t &altoPieza,
                     int &px, int &py,
                     unsigned short filas,
                     unsigned short ancho);

#endif
