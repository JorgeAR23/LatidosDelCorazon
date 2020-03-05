//
// Created by win 10 on 03/03/2020.
//

#include "LatidosDelCorazon.h"
using namespace std;

//Metodos constructores
LatidosDelCorazon::LatidosDelCorazon(int edad){}
LatidosDelCorazon::LatidosDelCorazon(){}

//Metodos setter
void LatidosDelCorazon::setEdad(int edad){
    this->Edad = Edad;
}
void LatidosDelCorazon::setLatidosMax(int LatidosMax){
    this->LatidosMax = LatidosMax;
}
void LatidosDelCorazon::setLatidosSegMin(int LatidosSegMin){
    this->LatidosSegMin = LatidosSegMin;
}
void LatidosDelCorazon::setLatidosSegMax(int LatidosSegMax){
    this->LatidosSegMax = LatidosSegMax;
}

//Metodos getter
int LatidosDelCorazon::getEdad(){
    return this->Edad;
}
int LatidosDelCorazon::getLatidosMax(){
    return this->LatidosMax;
}
int LatidosDelCorazon::getLatidosSegMin(){
    return this->LatidosSegMin;
}
int LatidosDelCorazon::getLatidosSegMax(){
    return this->LatidosSegMax;
}

void LatidosDelCorazon::calcularRangoLatidos(){
    this->LatidosMax = 220- this->Edad;
    this->LatidosSegMin = LatidosMax * 0.50;
    this->LatidosSegMax= LatidosMax * 0.85;
}