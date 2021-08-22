#ifndef SRC_PERSONA_H
#define SRC_PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Persona {
    private:
        string nombre;
        //direccion
        long telefono;
        string email;
        //IVA
        long cuit;
        //iibb

    public:
        Persona(string, string, long, long);
        ~Persona();
        const string getNombre();
        const long getTelefono();
        const string getEmail();
        const long getCuit();
        void setNombre(string);
        void setTelefono(long);
        void setEmail(string);
        void setCuit(long);
        void imprimirInfo();

    
};

#endif