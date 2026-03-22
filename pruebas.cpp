#include <iostream>
#include <cstdint> // Para uint8_t
using namespace std;

void prueba1(uint8_t** matriz){

    // ACÁ estoy editando directamente el tablero
    matriz[0][0] = 0b10101010;

    //acá modifico el tablero con una operación OR
    matriz[7][0] = matriz[7][0] | 0b00010000;

    //para no afectar el tablero necesito que la pieza se visualice temporalmente
    //sobre el tablero pero que sea independiente de este.

    matriz[1][0] = 0b11100111;

}
