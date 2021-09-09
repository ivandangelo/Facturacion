

#ifndef SRC_DIRECCION_H
#define SRC_DIRECCION_H

#include <iostream>
#include <string>
using namespace std;

class Direccion {
    private:
    	string calle;
    	int nro;
    	int piso;
    	char dpto;

    public:
        Direccion(string, int);
        Direccion();
        ~Direccion();
        const string getCalle();
        const int getNro();
        const int getPiso();
        const char getDpto();
        void setCalle(string);
        void setNro(int);
        void setPiso(int);
        void setDpto(char);
        void imprimirInfo();
        void grabarInfoDireccion(string, int, int = 0, char= ' ');

    
};

#endif