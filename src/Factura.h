#ifndef SRC_FACTURA_H
#define SRC_FACTURA_H
#include "Entidad.h"
#include <windows.h>
#include <iomanip>
struct sProductoAFacturar{
    string nombre = "--";
    int cantidad = 0;
    double precioUnitario = 0.0;
    double totalArticulo = 0.0;
};

class Head{
    private:
        Agente agent;
        string fecha;
        int nroFactura;
        
    public:
        Head();
        ~Head();
        void grabarInfoHead(Agente, string, int);
        void imprimirInfoHead();
        Agente getAgent() const;


};

class Body{
    private:
        sProductoAFacturar productos[10];
        int ultimoProductoIngresado;
        int iva;
    public:
        Body();
        ~Body();
        const int getUltimoProducto();
        void ingresarProducto(sProductoAFacturar);
        void imprimirInfoBody();
        void setIva(int);

};

class Foot{

};

class Factura{
    private:
        Head h;
        Body b;
    public:
        Factura();
        ~Factura();
        void grabarInfoFactura(Head, Body);
        void imprimirInfoFactura();


};


#endif