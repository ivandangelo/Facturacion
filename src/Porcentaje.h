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
        Porcentaje(string, int);
        ~Porcentaje();
        const string getDescripcion();
        const int getPorcentaje();
        void setPorcentaje(int);
        void setDescripcion(string);
        void imprimirInfo();
    
};

#endif