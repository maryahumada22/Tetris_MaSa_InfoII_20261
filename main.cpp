#include <iostream>
#include <cstdint>
#include <cstdlib> // system

#include "crearTablero.h"
#include "eliminarTablero.h"
#include "imprimirTablero.h"
#include "pedirMovimiento.h"
#include "verificarColision.h"
#include "verificarGameOver.h"
#include "escogerPieza.h"
#include "bajarPieza.h"

using namespace std;

// fija la pieza en el tablero
void fijarPieza(uint8_t** tablero,
                uint8_t* pieza,
                int px, int py,
                uint8_t altoPieza){

    for(int i = 0; i < altoPieza; i++){
        tablero[py+i][px] |= pieza[i];
    }
}

int main() {

    cout << "BIENVENIDO A UNA VERSION BARATA DE TETRIS\n";
    cout << "Made by: Santi Garcia y Mary Ahumada\n\n";

    unsigned short filas, bits;

    cout << "Ingrese el alto: ";
    cin >> filas;

    do{
        cout << "Ingrese el ancho (multiplo de 8): ";
        cin >> bits;
    }while(bits % 8 != 0);

    unsigned short byte = bits / 8;

    // crear tablero
    uint8_t** tablero = crearTablero(filas, byte);

    // generar primera pieza
    uint8_t altoPieza;
    uint8_t* pieza = escogerPieza(altoPieza);

    // posición inicial (centrada)
    int px = byte / 2;
    int py = 0;

    // loop principal
    while(true){

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        imprimirTablero(tablero, pieza, filas, byte, altoPieza, px, py);

        // GAME OVER
        if(verificarGameOver(tablero, byte)){
            cout << "\nGAME OVER\n";
            break;
        }

        pedirMovimiento(tablero, pieza, altoPieza, px, py, filas, byte);

        // caída automática
        if(!verificarColision(tablero, pieza, px, py, filas, altoPieza)){
            bajarPieza(py, filas, altoPieza);
        }
        else{
            // fijar pieza
            fijarPieza(tablero, pieza, px, py, altoPieza);

            // nueva pieza
            delete[] pieza;
            pieza = escogerPieza(altoPieza);

            // reiniciar posición
            px = byte / 2;
            py = 0;

            // evitar spawn con colisión inmediata
            if(verificarColision(tablero, pieza, px, py, filas, altoPieza)){
                cout << "\nGAME OVER\n";
                break;
            }
        }
    }

    eliminarTablero(tablero, filas);
    delete[] pieza;

    return 0;
}
