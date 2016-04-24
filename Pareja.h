#ifndef PAREJA_H_INCLUDED
#define PAREJA_H_INCLUDED

#include <math.h>

class Pareja{
private:
public:
    double x;
    double y;
    Pareja(){
    };

    Pareja(double x, double y){
        this->x = x;
        this->y = y;
    }

    void sumaPareja(double x, double y);

    double calcularDistancia(Pareja *pareja);

    double getX(){return this->x;};
    double getY(){return this->y;};
    void setX(double x){this->x =x;};
    void setY(double y){this->y =y;};
};

#endif // PAREJA_H_INCLUDED
