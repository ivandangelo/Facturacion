#include "Entidad.h"
#include "Factura.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct sAgente{
    string tel, email, cuit, nombre, razon, calle, desIva, desIibb;
    int nro, piso, iva, iibb;
    char depto;

};

struct sFactura{

};

Agente a;
Factura f;
vector<Agente> agentes(10, a);
vector<Factura> facturas(10, f);
int ultimoAgente = 0;
int ultimaFactura = 1;
sAgente agenteAux;
sFactura facturaAux;

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
    system("cls");



}

void buscarCliente(){
    int id;
    cout << "Ingrese el ID del cliente a buscar ";
    cin >> id;
    fflush(stdin);
    agentes[id].imprimirInfo();
}


/*g++ -g -o menu menu.cpp Direccion.cpp Entidad.cpp Porcentaje.cpp*/
int main(){
    ingresarAgente();

    system("pause");
	return 0;
}
