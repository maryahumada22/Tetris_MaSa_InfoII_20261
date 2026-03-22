#include <iostream>
#include <cstdint>
using namespace std;

void imprimirTablero(uint8_t** tablero, uint8_t* pieza,
            unsigned short int filas,
            unsigned short int anchoByte){

    //coordenadas de la pieza


    for (short int i=0; i<filas; i++) {
        for (short int j=0; j<anchoByte; j++) {
            //con esto mostraremos la pieza sin afectar al tablero
            short pyInicial = 3;//altura de la pieza
            short pxInicial = anchoByte/2; //un mal centrado por ahora.
            //pieza -> tablero[pyInicial][pxInicial]
            if (pxInicial==j && pyInicial>i){
                //en este caso el sgte for se ejecuta 3 veces
                for (short int bit=7; bit>=0;bit--) {
                    uint8_t printP =
                        ((pieza[i]>> bit) | (tablero[i][j]>> bit)) & 0b001;
                    if (printP == 1){
                        cout << "O";
                    }
                    else{
                        cout << ".";
                    }
                }
            }else{
                for (short int bit=7; bit>=0;bit--) { //vamos de izquierda a derecha
                    //tablero [filas][byte]
                    uint8_t valor = (tablero[i][j] >> bit) & 0b001;
                    //leemos y operamos sin modificar el tablero


                    if (valor == 1){
                        cout << "O";
                    }
                    else{
                        cout << ".";
                    }
                }
            }
        }
        cout << endl;
    }
}

