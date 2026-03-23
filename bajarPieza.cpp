#include "bajarPieza.h"

void bajarPieza(int &py, int filas, uint8_t altoPieza){
    if(py + altoPieza < filas){
        py++;
    }
}
