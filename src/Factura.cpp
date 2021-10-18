#include "Factura.h"

Head::Head(){
    fecha = '-';
    nroFactura = 0;
}
Head::~Head(){}
void Head::grabarInfoHead(Agente _agent, string _fecha, int _nroFactura){
    agent = _agent;
    fecha = _fecha;
    nroFactura = _nroFactura;

}
void Head::imprimirInfoHead(){

    cout << "############################################################################################################\n";
    cout << "                                                                                             " << fecha << "\n";
    cout << "       Factura Nro: " << nroFactura << "\n";
    cout << "       Nombre: " << agent.getNombre() << "\n";
    cout << "       Razon: " << agent.getRazon() << "\n";
    cout << "       Direccion: " << agent.getDireccion().getCalle() << " " << agent.getDireccion().getNro() << " piso " << agent.getDireccion().getPiso()  << " depto " << agent.getDireccion().getDpto() << "\n";
    cout << "############################################################################################################\n";

}

Body::Body(){
    ultimoProductoIngresado = 0;
    iva = 0;
}
Body::~Body(){}

const int Body::getUltimoProducto(){
    return ultimoProductoIngresado;
}

void Body::ingresarProducto(sProductoAFacturar _producto){
    productos[getUltimoProducto()] = _producto;
    ultimoProductoIngresado++;
}

void Body::imprimirInfoBody(){
    cout << "\t\tProducto\t\tCantidad\t\tP/U\t\tTotal de articulo\n";
    for(int i=0; i<ultimoProductoIngresado; i++){
        productos[i].totalArticulo = productos[i].precioUnitario * productos[i].cantidad;
        
        if(i == ultimoProductoIngresado-1){
            cout << "\t\t" << productos[i].nombre << "\t\t\t" << productos[i].cantidad << "\t\t\t" << productos[i].precioUnitario  << fixed<<setprecision(2) << "\t" << productos[i].totalArticulo << "\n";

        }else {
            cout << "\t\t" << productos[i].nombre << "\t\t\t" << productos[i].cantidad << "\t\t\t" << productos[i].precioUnitario  << fixed<<setprecision(2) << "\t\t" << productos[i].totalArticulo << "\n";
        }
        

    }
    cout << "############################################################################################################\n";
}

Factura::Factura(){}
Factura::~Factura(){}
void Factura::grabarInfoFactura(Head _h, Body _b){
    h = _h;
    b = _b;
    
}
void Factura::imprimirInfoFactura(){
    h.imprimirInfoHead();
    b.imprimirInfoBody();

}

