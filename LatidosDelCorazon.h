//
// Created by Jorge Aparicio Rodriguez on 03/03/2020.
//

#ifndef PROBLEMA2_LATIDOSDELCORAZON_H
#define PROBLEMA2_LATIDOSDELCORAZON_H


class LatidosDelCorazon {

    //Metodos
public:
    //Metodos constructores
    LatidosDelCorazon(int Edad);
    LatidosDelCorazon();

    //Metodos setter
    void setEdad(int Edad);
    void setLatidosMax(int LatidosMax);
    void setLatidosSegMin(int LatidosMinSeg);
    void setLatidosSegMax(int LatidosMaxSeg);

    //Metodos getter
    int getEdad();
    int getLatidosMax();
    int getLatidosSegMin();
    int getLatidosSegMax();

    int calcularRangoLatidos();

//Atributos
private:
    int Edad;
    int LatidosMax;
    int LatidosSegMax;
    int LatidosSegMin;

};


#endif //PRUEBA_BORRADOR_LATIDOSDELCORAZON_H
