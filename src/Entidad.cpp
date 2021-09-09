#include "Entidad.h"
#include "Direccion.h"

Entidad::Entidad (long _telefono, string _email, long _cuit){
    dir;
    email = _email;
    telefono = _telefono;
    cuit = _cuit;

}

Entidad::~Entidad(){}
const long Entidad::getTelefono(){ return telefono; }
const string Entidad::getEmail(){ return email; }
const long Entidad::getCuit(){ return cuit; }
const Direccion Entidad::getDireccion(){ return dir; }
void Entidad::setTelefono(long _telefono) { telefono = _telefono; }
void Entidad::setEmail(string _email) {email = _email; }
void Entidad::setCuit(long _cuit) {cuit = _cuit; }
void Entidad::setDireccion(string calle, int nro, int piso, char dpto){
    dir.setCalle(calle);
    dir.setNro(nro);
    dir.setPiso(piso);
    dir.setDpto(dpto);
}
void Entidad::imprimirInfo(){
    cout << "Email: " << getEmail() << "\n";
    cout << "Telefono: " << getTelefono() << "\n";
    cout << "Cuit: " << getCuit() << "\n";
    cout << "Direccion" << "\n";
    dir.imprimirInfo();
}

Cliente::Cliente(string _nombre, long _telefono, string _email, long _cuit):Entidad(_telefono, _email, _cuit){
    setNombre(_nombre);
}
Cliente::~Cliente(){}
void Cliente::imprimirInfo(){
    cout << "Nombre: " << getNombre() << "\n";
    Entidad::imprimirInfo();
    cout << "Impuestos" << "\n";
    IVA.imprimirInfo();
    IIBB.imprimirInfo();
    
}

const string Cliente::getNombre(){ return nombre; }
const Porcentaje Cliente::getIva(){ return IVA; }
const Porcentaje Cliente::getIibb() { return IIBB; }
void Cliente::setNombre(string _nombre){ nombre = _nombre; }
void Cliente::setIva(string _descripcion, int _porcentaje){
    IVA.setDescripcion(_descripcion);
    IVA.setPorcentaje(_porcentaje);
}
void Cliente::setIibb(string _descripcion, int _porcentaje){
    IIBB.setDescripcion(_descripcion);
    IIBB.setPorcentaje(_porcentaje);
}



