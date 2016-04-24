#include "Pareja.h"

void Pareja::sumaPareja(double x, double y ){
    this->x += x;
    this->y +=y;
}

double Pareja::calcularDistancia(Pareja *pareja){
    return  sqrt(pow((pareja->x - this->x), 2) + pow((pareja->y - this->y), 2));
}
