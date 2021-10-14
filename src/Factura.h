#ifndef SRC_FACTURA_H
#define SRC_FACTURA_H
#include "Entidad.h"

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



#endif