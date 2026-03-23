#include "mostrarPieza.h"
#include <iostream>
using namespace std;

void mostrarPieza(uint8_t* pieza, uint8_t altoPieza){

    for(int i = 0; i < altoPieza; i++){
        for(int bit = 7; bit >= 0; bit--){
            uint8_t val = (pieza[i] >> bit) & 1;
            cout << (val ? "O" : ".");
        }
        cout << endl;
    }
}
