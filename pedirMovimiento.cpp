#include <iostream>
#include <cstdint>
#include "bajarpieza.h"
#include "moverder.h"
#include "moverizq.h"
// rotarpieza.h

using namespace std;

void pedirMovimiento(uint8_t** matriz, uint8_t* pieza){
    char mov = 0;
    cout << "a=Left|d=Right|s=Down|w=Rotate: ";
    cin >> mov;
    switch (mov) {
        case 'a':
        case 'A':
            cout << "Izquierda" << endl;
            moverIzq(matriz, pieza);
            break;
        case 'd':
        case 'D':
            cout << "Derecha" << endl;
            //moverDer(matriz, pieza);
            break;
        case 's':
        case 'S':
            cout << "Bajar" << endl;
            //bajarPieza(matriz, pieza);
            break;
        case 'w':
        case 'W':
            cout << "Rotar" << endl;
            //rotar pieza
            break;
        default:
            cout << "Opcion no valida" << endl;
    }
}
