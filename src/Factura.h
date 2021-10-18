#ifndef SRC_FACTURA_H
#define SRC_FACTURA_H
#include "Entidad.h"
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
        void mostrarProductos();
        void ingresarProducto(sProductoAFacturar);
        void imprimirInfoBody();

};

class Foot{

};

class Factura{


};


#endif