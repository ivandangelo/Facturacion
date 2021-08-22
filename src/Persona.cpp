#include "Persona.h"

Persona::Persona(string _nombre, string _email, long _telefono, long _cuit){
    nombre = _nombre;
    email = _email;
    telefono = _telefono;
    cuit = _cuit;

}
Persona::~Persona(){}
const string Persona::getNombre(){ return nombre; }
const long Persona::getTelefono(){ return telefono; }
const string Persona::getEmail(){ return email; }
const long Persona::getCuit(){ return cuit; }
void Persona::setNombre(string _nombre) { nombre = _nombre; }
void Persona::setTelefono(long _telefono) { telefono = _telefono; }
void Persona::setEmail(string _email) {email = _email; }
void Persona::setCuit(long _cuit) {cuit = _cuit; }
void Persona::imprimirInfo(){
    cout << "Nombre: " << getNombre() << "\n";
    cout << "Email: " << getEmail() << "\n";
    cout << "Telefono: " << getTelefono() << "\n";
    cout << "Cuit: " << getCuit() << "\n";
}

