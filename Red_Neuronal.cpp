#include "Red_Neuronal.h"

int Red_Neuronal::masCercano(Pareja *pareja){
    int posicion = -1;
    double menor = TAMANO_ARREGLO;
    double distancia;
    for (int i = 0; i < TAMANO_ARREGLO; i++) {
      distancia = red[i].calcularDistancia(pareja);
      if (menor > distancia) {
            menor = distancia;
            posicion = i;
      }
    }
    return posicion;
}

void Red_Neuronal::cambiarPeso(Pareja *entrada, int posicionCercana){
    double distanciaEnX = TASA_APRENDIZAJE * (entrada->x - red[posicionCercana].getX());
    double distanciaEnY = TASA_APRENDIZAJE * (entrada->y - red[posicionCercana].getY());

    red[posicionCercana].sumaPareja(distanciaEnX, distanciaEnY);

}

void Red_Neuronal::imprimirRed(){
     cout<<"RED:"<<endl;
     for(int i = 0; i< (sizeof(red)/sizeof(*red)) ; ++i ){
        cout<<"("<<red[i].getX()<<","<<red[i].getY()<<") ";
     }
     cout<<endl;
}

void Red_Neuronal::imprimirEntrada(){
     cout<<"ENTRADA:"<<endl;
     for(int i = 0; i< (sizeof(entradas)/sizeof(*entradas)) ; ++i ){
        cout<<"("<<entradas[i].getX()<<","<<entradas[i].getY()<<") ";
     }
     cout<<endl;
}

void Red_Neuronal::entrenar(){
    int cercano = 0;
        imprimirRed();
        imprimirEntrada();
        for(int i=0; i <  (sizeof(entradas)/sizeof(*entradas));++i){
            cercano = masCercano(&entradas[i]);
            cambiarPeso(&entradas[i], cercano);
        }
        imprimirRed();
}
