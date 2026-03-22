#include <cstdint>
#include "creartablero.h"

using namespace std;

uint8_t** crearTablero(unsigned short int y,unsigned short int x) {
    unsigned short int alto=y, anchoByte=x;

    uint8_t** tablero = nullptr;

    tablero = new uint8_t*[alto]; //filas
    for (int i = 0; i < alto; i++) {
        tablero[i] = new uint8_t[anchoByte]; //columnas (divididas por bytes)
        for (int j = 0; j < anchoByte; j++){
            tablero[i][j] = 0; // inicialmente está vacío
        }
    }
    return tablero;
}
