#include "mostrarPieza.h"
#include <iostream>
using namespace std;

void mostrarPieza(uint8_t* pieza, short altoPieza){

    for(int i = 0; i < altoPieza; i++){
        for(int bit = 7; bit >= 0; bit--){
            uint8_t val = (pieza[i] >> bit) & 0b001;

            if(val == 1) cout << "O";
            else cout << ".";
        }
        cout << endl;
    }
}
