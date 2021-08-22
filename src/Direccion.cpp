#include "Direccion.h"

Direccion::Direccion(string _calle, int _nro){
	calle = _calle;
	nro = _nro;
	piso = 0;
	dpto = ' ';
}
Direccion::~Direccion(){}
const string Direccion::getCalle(){ return calle; }
const int Direccion::getNro(){ return nro; }
const int Direccion::getPiso(){ return piso; }
const char Direccion::getDpto(){ return dpto; }
void Direccion::setCalle(string _calle) { calle = _calle; }
void Direccion::setNro(int _nro) { nro = _nro; }
void Direccion::setPiso(int _piso) {piso = _piso; }
void Direccion::setDpto(char _dpto) {dpto = _dpto; }
void Direccion::imprimirInfo(){
    cout << "Calle: " << getCalle() << "\n";
    cout << "Numero: " << getNro() << "\n";
    cout << "Piso: " << getPiso() << "\n";
    cout << "Depto: " << getDpto() << "\n";
}