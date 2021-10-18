#include "Direccion.h"

Direccion::Direccion(){}
Direccion::~Direccion(){}
string Direccion::getCalle() const { return calle; }
int Direccion::getNro() const { return nro; }
int Direccion::getPiso() const { return piso; }
char Direccion::getDpto() const { return dpto; }
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
void Direccion::grabarInfoDireccion(string _calle, int _nro, int _piso, char _dpto){
    setCalle(_calle);
    setNro(_nro);
    setPiso(_piso);
    setDpto(_dpto);

}