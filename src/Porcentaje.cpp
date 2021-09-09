#include "Porcentaje.h"

Porcentaje::Porcentaje(string _descripcion, int _porcentaje){
    descripcion = _descripcion;
    porcentaje = _porcentaje;

}

Porcentaje::Porcentaje(){}

Porcentaje::~Porcentaje(){}

const string Porcentaje::getDescripcion() { return descripcion; }
const int Porcentaje::getPorcentaje() { return porcentaje; }
void Porcentaje::setPorcentaje(int _porcentaje) { porcentaje = _porcentaje; }
void Porcentaje::setDescripcion(string _descripcion) { descripcion = _descripcion; }
void Porcentaje::imprimirInfo(){
    cout << "Descripcion: " << getDescripcion() << "\n";
    cout << "Porcentaje: " << getPorcentaje() << "\n";

}


