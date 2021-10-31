#include "Factura.h"
 
void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  


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

Agente Head::getAgent() const{
    return agent;
}
void Head::imprimirInfoHead(){

    cout << "############################################################################################################\n";
    cout << "                                                                                             " << fecha << "\n";
    cout << "       ID " << nroFactura << "\n";
    cout << "       " << agent.getNombre() << "\n";
    cout << "       " << agent.getRazon() << "\n";
    cout << "       " << agent.getDireccion().getCalle() << " " << agent.getDireccion().getNro() << " Piso " << agent.getDireccion().getPiso()  << " Depto " << agent.getDireccion().getDpto() << "\n";
    cout << "############################################################################################################\n";

}

Body::Body(){
    ultimoProductoIngresado = 0;
    int iva = 0;
}
Body::~Body(){}

void Body::setIva(int _iva) { iva = _iva; }

const int Body::getUltimoProducto(){
    return ultimoProductoIngresado;
}

void Body::ingresarProducto(sProductoAFacturar _producto){
    productos[getUltimoProducto()] = _producto;
    ultimoProductoIngresado++;
}

void Body::imprimirInfoBody(){
    int ultimaPos;
    double subTotal = 0.0;
    double total = 0.0;

    cout << "\t\tProducto\t\tCantidad\t\tP/U\t\tTotal de articulo\n";
    /**/
    for(int i=0; i<ultimoProductoIngresado; i++){
        productos[i].totalArticulo = productos[i].cantidad * productos[i].precioUnitario;
        gotoxy(16,i+8); cout << productos[i].nombre;
        gotoxy(40, i+8); cout << productos[i].cantidad;
        gotoxy(64, i+8); cout <<"$"<<productos[i].precioUnitario;
        gotoxy(80, i+8); cout << fixed << setprecision(2) <<"$"<< productos[i].totalArticulo;
        ultimaPos = i+8;
        subTotal = subTotal + productos[i].totalArticulo;

    }
    gotoxy(0, ultimaPos+1);
    total = subTotal + (subTotal*double(iva/100.0));
    cout << "############################################################################################################\n";
    cout << "       IVA: " << iva << "%\n";
    cout << "       Subtotal: $" << subTotal << "\n";
    cout << "------------------------------------------------------------------------------------------------------------\n";
    cout << "       Total: $" << total << "\n";
    cout << "############################################################################################################\n";
}

Factura::Factura(){}
Factura::~Factura(){}
void Factura::grabarInfoFactura(Head _h, Body _b){
    h = _h;
    b = _b;
    b.setIva(h.getAgent().getIva().getPorcentaje());
    
}
void Factura::imprimirInfoFactura(){
    h.imprimirInfoHead();
    b.imprimirInfoBody();

}

