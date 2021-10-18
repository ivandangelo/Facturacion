#include "Entidad.h"
#include "Porcentaje.h"
#include "Factura.h"

void test0Direccion(){
    Direccion dir;
    dir.grabarInfoDireccion("Av marquez", 2521, 13, '9');
    dir.imprimirInfo();
    dir.setCalle("Nueva Calle");
    dir.setNro(123);
    dir.setPiso(5);
    dir.setDpto('B');
    dir.imprimirInfo();
}

void test0Porcentaje(){
    Porcentaje por;
    por.grabarInfoPorcentaje("IVA", 21);
    por.imprimirInfo();
    por.setDescripcion("IIBB");
    por.setPorcentaje(31);
    por.imprimirInfo();
}

void test0Entidad(){
    Entidad ent;
    ent.grabarInfo("Av Marquez", 2521, 13, '9', "1566071859", "juanperez@yahoo.com", "20-1234567-3");
    ent.imprimirInfo();
    Direccion direDeEnt = ent.getDireccion();
    direDeEnt.imprimirInfo();
    direDeEnt.grabarInfoDireccion("Nueva calle", 2000, 10, 'D');
    ent.setDireccion(direDeEnt);
    ent.imprimirInfo();


}

void test0Factura(){
    Agente a;
    a.grabarInfo("Av Marquez", 2521, 13, '9', "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
                "Cliente particular", "IVA", 21, "IIBB", 31);
    /*(string _calle, int _nro, int _piso, char _depto, string _tel, string _email, string _cuil, string _nombre, string _razon, string _descriptIva, int _porcIva, string _descriptIibb, int _porcIibb)*/
    Head h;
    h.grabarInfoHead(a, "14/10/2021", 1);
    h.imprimirInfoHead();

}

//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp
//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp Porcentaje.cpp Factura.cpp



int main(){
    Body b;
    Head h;
    Agente a;
    Factura f;
    a.grabarInfo("Av Marquez", 2521, 13, '9', "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
                "Cliente particular", "IVA", 21, "IIBB", 31);

    h.grabarInfoHead(a, "20/04/2021", 1);

    sProductoAFacturar test;
    sProductoAFacturar p2;
    sProductoAFacturar p3;
    p2.cantidad = 3;
    p2.nombre = "Teclado";
    p2.precioUnitario = 3000.0;
    p3.cantidad = 10;
    p3.nombre = "GPU";
    p3.precioUnitario = 250000.0;
    test.cantidad = 5;
    test.nombre = "Mouse";
    test.precioUnitario = 1000.0;
    b.ingresarProducto(test);
    b.ingresarProducto(p2);
    b.ingresarProducto(p3);

    f.grabarInfoFactura(h, b);
    f.imprimirInfoFactura();



    system("pause");
	return 0;
}