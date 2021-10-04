#ifndef SRC_PORCENTAJE_H
#define SRC_PORCENTAJE_H

#include <iostream>
#include <string>
using namespace std;

class Porcentaje{
    private:
        string descripcion;
        int porcentaje;

    public:
        Porcentaje();
        ~Porcentaje();
        const string getDescripcion();
        const int getPorcentaje();
        void setPorcentaje(int);
        void setDescripcion(string);
        void imprimirInfo();
        void grabarInfoPorcentaje(string, int);
    
};

#endif