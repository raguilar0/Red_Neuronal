#include "Pareja.h"

void Pareja::sumaPareja(double categoria_casa, double categoria_visita ){
    this->categoria_casa += categoria_casa;
    this->categoria_visita +=categoria_visita;

}

double Pareja::calcularDistancia(Pareja *pareja){
    return  sqrt(pow((pareja->categoria_casa - this->categoria_casa), 2) + pow((pareja->categoria_visita - this->categoria_visita), 2));
}
