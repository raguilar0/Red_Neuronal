#ifndef PAREJA_H_INCLUDED
#define PAREJA_H_INCLUDED

#include <math.h>

class Pareja{
private:
public:
    double categoria_casa;
    double categoria_visita;
    char resultado;
    Pareja(){
    };

    Pareja(double categoria_casa, double categoria_visita){
        this->categoria_casa = categoria_casa;
        this->categoria_visita = categoria_visita;
    }

    void sumaPareja(double categoria_casa, double categoria_visita);

    double calcularDistancia(Pareja *pareja);

    double getCategoria_casa(){return this->categoria_casa;};
    double getCategoria_visita(){return this->categoria_visita;};
    char getResultado(){return this->resultado};
    void setResultado(char resultado){this->resultado = resultado;};
    void setCategoria_casa(double categoria_casa){this->categoria_casa =categoria_casa;};
    void setCategoria_visita(double categoria_visita){this->categoria_visita =categoria_visita;};
};

#endif // PAREJA_H_INCLUDED
