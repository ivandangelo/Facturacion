

#ifndef SRC_DIRECCION_H
#define SRC_DIRECCION_H

#include <iostream>
#include <string>
using namespace std;

class Direccion {
    private:
    	string calle;
    	int nro;
    	string piso;
    	string dpto;

    public:
        Direccion();
        ~Direccion();
        string getCalle() const;
        int getNro() const;
        string getPiso() const;
        string getDpto() const;
        void setCalle(string);
        void setNro(int);
        void setPiso(string);
        void setDpto(string);
        void imprimirInfo();
        void grabarInfoDireccion(string, int, string, string);

    
};

#endif