#include "Entidad.h"
/*#include "Direccion.h"*/

/*Entidad::Entidad(string _telefono, string _email, string _cuit){
    email = _email;
    telefono = _telefono;
    cuit = _cuit;
    dir.grabarInfoDireccion("Ing dire.", 0, -1, 'a');

}*/

Entidad::~Entidad(){}
const string Entidad::getTelefono(){ return telefono; }
const string Entidad::getEmail(){ return email; }
const string Entidad::getCuit(){ return cuit; }
const Direccion Entidad::getDireccion(){ return dir; }
void Entidad::setTelefono(string _telefono) { telefono = _telefono; }
void Entidad::setEmail(string _email) {email = _email; }
void Entidad::setCuit(string _cuit) {cuit = _cuit; }
void Entidad::setDireccion(Direccion _dir){ 
    dir.setCalle(_dir.getCalle());
    dir.setNro(_dir.getNro());
    dir.setPiso(_dir.getPiso());
    dir.setDpto(_dir.getDpto());

}
void Entidad::imprimirInfo(){
    cout << "Email: " << getEmail() << "\n";
    cout << "Telefono: " << getTelefono() << "\n";
    cout << "Cuit: " << getCuit() << "\n";
    cout << "Direccion" << "\n";
    dir.imprimirInfo();
}
void Entidad::grabarInfo(string _calle, int _nro, string _piso, string _dpto, string _tel, string _email, string _cuil){
    dir.grabarInfoDireccion(_calle, _nro, _piso, _dpto);
    setTelefono(_tel);
    setEmail(_email);
    setCuit(_cuil);

}

/*
Agente::Agente(string _telefono, string _email, string _cuit): Entidad(_telefono, _email, _cuit){
    nombre = "Ing. Nombre";
    razon = "Ing. Razon";
    IVA.grabarInfoPorcentaje("Ing. Descript IVA", 0);
    IIBB.grabarInfoPorcentaje("Ing. Descript IIBB", 0);
}*/
Agente::~Agente(){}
void Agente::imprimirInfo(){
    cout << "Nombre: " << getNombre() << "\n";
    cout << "Razon: " << getRazon() << "\n";
    Entidad::imprimirInfo();
    cout << "Impuestos" << "\n";
    IVA.imprimirInfo();
    IIBB.imprimirInfo();
    
}

const string Agente::getNombre(){ return nombre; }
const string Agente::getRazon(){ return razon; }
Porcentaje Agente::getIva() const{ return IVA; }
Porcentaje Agente::getIibb() const{ return IIBB; }
void Agente::setNombre(string _nombre){ nombre = _nombre; }
void Agente::setRazon(string _razon){ razon = _razon; }
void Agente::setIva(string _descripcion, int _porcentaje){
    IVA.setDescripcion(_descripcion);
    IVA.setPorcentaje(_porcentaje);
}
void Agente::setIibb(string _descripcion, int _porcentaje){
    IIBB.setDescripcion(_descripcion);
    IIBB.setPorcentaje(_porcentaje);


}
void Agente::grabarInfo(string _calle, int _nro, string _piso, string _depto, string _tel, string _email, string _cuil, string _nombre, string _razon, string _descriptIva, int _porcIva, string _descriptIibb, int _porcIibb){
    
    setNombre(_nombre);
    setRazon(_razon);
    Entidad::grabarInfo(_calle, _nro, _piso, _depto, _tel, _email, _cuil);
    IVA.grabarInfoPorcentaje(_descriptIva, _porcIva);
    IIBB.grabarInfoPorcentaje(_descriptIibb, _porcIibb);


}

