#include "imprimirTablero.h"
#include <iostream>
using namespace std;

void imprimirTablero(uint8_t** tablero,
                     uint8_t* pieza,
                     unsigned short filas,
                     unsigned short ancho,
                     uint8_t altoPieza,
                     int px, int py){

    for(int i=0;i<filas;i++){
        for(int j=0;j<ancho;j++){
            for(int bit=7;bit>=0;bit--){

                uint8_t val = (tablero[i][j]>>bit)&1;

                if(j==px && i>=py && i<py+altoPieza){
                    val |= (pieza[i-py]>>bit)&1;
                }

                cout<<(val?'O':'.');
            }
        }
        cout<<endl;
    }
}
