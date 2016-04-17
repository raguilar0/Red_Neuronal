#ifndef RED_NEURONAL_H_INCLUDED
#define RED_NEURONAL_H_INCLUDED
#include "Pareja.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

#define TAMANO_ARREGLO  10
#define TASA_APRENDIZAJE  0.1

using namespace std;



class Red_Neuronal{

private:
    Pareja red [TAMANO_ARREGLO];
    Pareja entradas [TAMANO_ARREGLO];
public:
    ///Constructor
    Red_Neuronal(){
        srand (time(NULL));
        // Se inicializan los dos vectores
        for (int i = 0; i < TAMANO_ARREGLO; i++) {
                red[i].setX(rand()%TAMANO_ARREGLO);
                red[i].setY(rand()%TAMANO_ARREGLO);
                entradas[i].setX(rand()%TAMANO_ARREGLO);
                entradas[i].setY(rand()%TAMANO_ARREGLO);
            }
    };
    int masCercano(Pareja *pareja);
    void cambiarPeso(Pareja *entrada, int posicionCercana);
    void entrenar();
    void imprimirRed();
    void imprimirEntrada();

};


#endif // RED_NEURONAL_H_INCLUDED
