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
        long telefono;
        string email;
        long cuit;

    public:
        Entidad(long, string, long);
        ~Entidad();
        const long getTelefono();
        const string getEmail();
        const long getCuit();
        const Direccion getDireccion();
        void setDireccion(string, int, int = 0, char = ' ');
        void setTelefono(long);
        void setEmail(string);
        void setCuit(long);
        void imprimirInfo();

    
};

class Cliente : public Entidad{
    private:
        string nombre;
        Porcentaje IVA;
        Porcentaje IIBB;
    public:
        Cliente(string, long, string, long);
        ~Cliente();
        void imprimirInfo();
        const string getNombre();
        const Porcentaje getIva();
        const Porcentaje getIibb();
        void setNombre(string);
        void setIva(string, int);
        void setIibb(string, int);

};

#endif