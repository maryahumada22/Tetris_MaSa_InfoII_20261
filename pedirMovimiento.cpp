#include "pedirMovimiento.h"
#include "moverIzq.h"
#include "moverDer.h"
#include "bajarPieza.h"
#include "rotarPieza.h"
#include "verificarColision.h"
#include <iostream>
using namespace std;

void pedirMovimiento(uint8_t** tablero,
                     uint8_t* pieza,
                     uint8_t &altoPieza,
                     int &px, int &py,
                     unsigned short filas,
                     unsigned short ancho){

    char mov;
    cout << "a=izq d=der s=bajar w=rotar: ";
    cin >> mov;

    switch(mov){
    moverIzq(pieza, altoPieza);
    moverDer(pieza, altoPieza);

    case 's':
        if(!verificarColision(tablero,pieza,px,py,filas,altoPieza)){
            bajarPieza(py, filas, altoPieza);
        }
        break;

    case 'w':
        rotarPieza(pieza, altoPieza);
        break;
    }
}
