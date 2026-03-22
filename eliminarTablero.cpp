#include <iostream>
#include <cstdint>

using namespace std;

void eliminarTablero(uint8_t** matriz, unsigned short int bytes) {
    for (unsigned short int i = 0; i < bytes; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    cout << "Memoria del tablero liberada con exito." << endl;
}
