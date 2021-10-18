#include "Factura.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct sAgente{
    string tel, email, cuit, nombre, razon, calle, desIva, desIibb, piso, depto;
    int nro, iva, iibb;

};

struct sHead {
    string fecha;
    int nroFactura;
    Agente agent;

};


struct sFactura{
    Head h;
    Body b;

};

Agente a;
Factura f;
vector<Agente> agentes(10, a);
vector<Factura> facturas(10, f);
int ultimoAgente = 0;
int ultimaFactura = 0;
sAgente agenteAux;
sFactura facturaAux;
sHead headAux;
sProductoAFacturar productoAux;

void ingresarAgente(){
    system("cls");
    cout << "--------DATOS PERSONALES--------\n";
    cout << "Ingrese nombre ";
    getline(cin, agenteAux.nombre);
    cout << "Ingrese razon ";
    getline(cin, agenteAux.razon);
    cout << "Ingrese email ";
    getline(cin, agenteAux.email);
    cout << "Ingrese cuit ";
    getline(cin, agenteAux.cuit);
    cout << "Ingrese numero telefono ";
    getline(cin, agenteAux.tel);
    cout << "--------DIRECCION--------\n";
    cout << "Ingrese calle ";
    getline(cin, agenteAux.calle);
    cout << "Ingrese numero ";
    cin >> agenteAux.nro;
    cout << "Ingrese piso ";
    cin >> agenteAux.piso;
    cout << "Ingrese depto ";
    cin >> agenteAux.depto;
    fflush(stdin);
    cout << "--------DATOS CONTABLES--------\n";
    cout << "Ingrese descripcion IVA ";
    getline(cin, agenteAux.desIva);
    cout << "Ingrese valor IVA ";
    cin >> agenteAux.iva;
    fflush(stdin);
    cout << "Ingrese descripcion IIBB ";
    getline(cin, agenteAux.desIibb);
    cout << "Ingrese valor IIBB ";
    cin >> agenteAux.iibb;

    /*(string _calle, int _nro, int _piso, char _depto, string _tel, string _email, string _cuil, string _nombre, string _razon, string _descriptIva, int _porcIva, string _descriptIibb, int _porcIibb)*/
    a.grabarInfo(agenteAux.calle, agenteAux.nro, agenteAux.piso, agenteAux.depto, agenteAux.tel, agenteAux.email, 
                        agenteAux.cuit, agenteAux.nombre, agenteAux.razon, agenteAux.desIva, agenteAux.iva, 
                        agenteAux.desIibb, agenteAux.iibb);
    agentes[ultimoAgente] = a;
    ultimoAgente++;
    fflush(stdin);

    cout << "Cliente creado con exito";
    system("pause");
    system("cls");



}

void buscarCliente(){
    int id;
    cout << "Ingrese el ID del cliente a buscar ";
    cin >> id;
    agentes[id].imprimirInfo();

    fflush(stdin);
    system("pause");
    system("cls");

}

void facturar(){

    int id = 0;
    bool salir = false;
    string respuesta = "";

    cout << "Ingrese ID del cliente ";
    cin >> id;
    headAux.agent = agentes[id];
    fflush(stdin);
    cout << "Ingrese la fecha ";
    getline(cin, headAux.fecha);
    headAux.nroFactura = ultimaFactura+1;
    facturaAux.h.grabarInfoHead(headAux.agent, headAux.fecha, headAux.nroFactura);

    cout << "Ingrese los productos\n";
    while(!salir){
        cout << "Ingrese el nombre ";
        getline(cin, productoAux.nombre);
        cout << "Ingrese precio unitario ";
        cin >> productoAux.precioUnitario;
        fflush(stdin);
        cout << "Ingrese cantidad ";
        cin >> productoAux.cantidad;
        fflush(stdin);
        productoAux.totalArticulo = productoAux.cantidad * productoAux.precioUnitario;
        facturaAux.b.ingresarProducto(productoAux);

        cout << "Producto ingresado exitosamente, desea ingresar otro? s/n\n";
        getline(cin, respuesta);

        if (respuesta != "S" && respuesta != "s"){
            salir = true;

        }

    }

    f.grabarInfoFactura(facturaAux.h, facturaAux.b);
    f.imprimirInfoFactura();

    facturas[ultimaFactura] = f;
    ultimaFactura++;
    system("pause");
    system("cls");

    


}

/*g++ -g -o menu menu.cpp Direccion.cpp Factura.cpp Entidad.cpp Porcentaje.cpp*/
int main(){
    bool salir = false;
	int op = 0;

    do{

        cout << "--- MENU PRINCIPAL---" << "\n";
        cout << "1) Ingresar Cliente" << "\n";
        cout << "2) Buscar Cliente" << "\n";
        cout << "3) Buscar Factura" << "\n";
        cout << "4) Facturar" << "\n";
        cout << "5) Salir" << "\n";
        cout << "Opcion: " ;
        cin>> op;
	    fflush(stdin);


        switch(op)
            {
                case 1:
                    ingresarAgente();
                    break;
                case 2:
                    buscarCliente();
                    break;
                case 5:	
                    cout << "Gracias por utilizar el programa\n";
                    salir = true;
                    break;
                case 4:
                    facturar();
                    break;
                default:
                    cout << "Opcion no valida\n";
                    break;
            }
    }while(!salir);

    system("pause");
	return 0;
}