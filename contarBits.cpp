#include "contarbits.h"

unsigned short int contarBits(unsigned short int* ptr) {
    if (ptr == nullptr) return 0;

    unsigned short int valor = *ptr;
    unsigned short int contador = 0;

    while (valor > 0) {
        contador += (valor & 0b001); // Suma 1 si el último bit es 1
        valor = valor >> 1;     // Desplaza a la derecha
    }
    return contador;
}
