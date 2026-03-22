#include "verificarGameOver.h"

bool verificarGameOver(uint8_t** tablero, unsigned short int anchoByte){

    // revisa primera fila
    for(int j = 0; j < anchoByte; j++){
        if(tablero[0][j] != 0){
            return true;
        }
    }

    return false;
}
