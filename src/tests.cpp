#include "Entidad.h"
#include "Porcentaje.h"
#include "Factura.h"

void test0Direccion(){
    Direccion dir;
    dir.grabarInfoDireccion("Av marquez", 2521, "13", "9");
    dir.imprimirInfo();
    dir.setCalle("Nueva Calle");
    dir.setNro(123);
    dir.setPiso("5");
    dir.setDpto("B");
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
    ent.grabarInfo("Av Marquez", 2521, "13", "9", "1566071859", "juanperez@yahoo.com", "20-1234567-3");
    ent.imprimirInfo();
    Direccion direDeEnt = ent.getDireccion();
    direDeEnt.imprimirInfo();
    direDeEnt.grabarInfoDireccion("Nueva calle", 2000, "10", "3");
    ent.setDireccion(direDeEnt);
    ent.imprimirInfo();


}

void test0Agente(){
    Agente a;
    tipoCliente p = Proveedor;
    a.setRazon(p);
    cout << a.getRazon();
}

void test0Factura(){
    Agente a;
    tipoCliente p = Proveedor;
    a.grabarInfo("Av Marquez", 2521, "13", "9", "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
                p, "IVA", 21, "IIBB", 31);
    /*(string _calle, int _nro, int _piso, char _depto, string _tel, string _email, string _cuil, string _nombre, string _razon, string _descriptIva, int _porcIva, string _descriptIibb, int _porcIibb)*/
    Head h;
    h.grabarInfoHead(a, "14/10/2021", 1);
    h.imprimirInfoHead();

}

void test1Factura() {
    Body b;
    Head h;
    Agente a;
    Factura f;
    tipoCliente p = Proveedor;
    a.grabarInfo("Av Marquez", 2521, "13", "9", "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
                p, "IVA", 21, "IIBB", 31);

    h.grabarInfoHead(a, "20/04/2021", 1);

    sProductoAFacturar test, p2, p3, p4, p5, p6, p7;
    p2.cantidad = 3;
    p2.nombre = "Teclado";
    p2.precioUnitario = 3000.0;
    p3.cantidad = 10;
    p3.nombre = "GPU";
    p3.precioUnitario = 250000.0;
    test.cantidad = 5;
    test.nombre = "Mouse";
    test.precioUnitario = 1000.0;
    p4.cantidad = 2;
    p4.nombre = "RAM";
    p4.precioUnitario = 500.0;
    p5.cantidad = 15;
    p5.nombre = "DISCO HDD";
    p5.precioUnitario = 300.0;
    p6.cantidad = 15;
    p6.nombre = "MONITOR";
    p6.precioUnitario = 150000.0;
    b.ingresarProducto(test);
    
    b.ingresarProducto(p2);
    
    b.ingresarProducto(p3);
    
    b.ingresarProducto(p4);
    b.ingresarProducto(p5);
    b.ingresarProducto(p6);
    
    f.grabarInfoFactura(h, b);
    f.imprimirInfoFactura();
}

void test0EliminarCliente(){
    Agente agentes[10];
    Agente a;
    Agente b;
    Agente c;
    Agente d;
    tipoCliente p = Proveedor;
    int agenteEliminar = 0;
    int cantidadAgentes = 4;
    a.grabarInfo("Uno", 2521, "13", "9", "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
                p, "IVA", 21, "IIBB", 31);
    b.grabarInfo("Dos", 2521, "13", "9", "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
            p, "IVA", 21, "IIBB", 31);
    c.grabarInfo("Tres", 2521, "13", "9", "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
            p, "IVA", 21, "IIBB", 31);
    d.grabarInfo("Cuatro", 2521, "13", "9", "1566071993", "ivanuntref@gmail.com", "20388898993", "Ivan", 
            p, "IVA", 21, "IIBB", 31);

    agentes[0] = a;
    agentes[1] = b;
    agentes[2] = c;
    agentes[3] = d;
    for(int i=0; i<cantidadAgentes; i++){
        if(i == agenteEliminar){
            while (i<cantidadAgentes-1){
                agentes[i] = agentes[i+1];
                i++;
            }
            break;
        }
        
    }
    cantidadAgentes--;
    cout << cantidadAgentes << "\n";

    for(int i=0; i<cantidadAgentes; i++){
        cout << agentes[i].getDireccion().getCalle() << "\n";
    }
    

}

//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp
//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp Porcentaje.cpp Factura.cpp



int main(){
    test0EliminarCliente();
    system("pause");
	return 0;
}