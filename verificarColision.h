#ifndef VERIFICARCOLISION_H
#define VERIFICARCOLISION_H

#include <cstdint>

bool verificarColision(uint8_t** tablero,
                       uint8_t* pieza,
                       int px, int py,
                       int filas,
                       uint8_t altoPieza);

#endif
