#ifndef SRC_ENTIDAD_H
#define SRC_ENTIDAD_H

#include <iostream>
#include <string>
#include "Direccion.h"
#include "Porcentaje.h"
using namespace std;

class Entidad{
    private:
        Direccion dir;
        string telefono;
        string email;
        string cuit;

    public:
        Entidad(string, string, string);
        ~Entidad();
        const string getTelefono();
        const string getEmail();
        const string getCuit();
        const Direccion getDireccion();
        void setDireccion(Direccion _dir);
        void setTelefono(string);
        void setEmail(string);
        void setCuit(string);
        virtual void imprimirInfo();
        void grabarInfoEntidad(string, int, int, char, string, string, string);

    
};

class Agente : public Entidad{
    private:
        string nombre;
        string razon;
        Porcentaje IVA;
        Porcentaje IIBB;
    public:
        Agente(string, string, string);
        ~Agente();
        void imprimirInfo();
        const string getNombre();
        const string getRazon();
        const Porcentaje getIva();
        const Porcentaje getIibb();
        void setNombre(string);
        void setRazon(string);
        void setIva(string, int);
        void setIibb(string, int);
        void grabarInfoAgente(string, int, int, char, string, string, string, string, string, string, int, string, int);

};

#endif