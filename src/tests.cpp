#include "Entidad.h"
#include "Porcentaje.h"

void test0_direccion(){
    Direccion d = Direccion("Av Marquez", 2521);
    d.setPiso(13);
    d.setDpto('9');
    d.imprimirInfo();

}

void test1_direccion(){
    Direccion d = Direccion("Av Marquez", 2521);
    d.imprimirInfo();
    d.setPiso(13);
    d.setDpto('C');
    d.imprimirInfo();

}

void test0_porcentaje(){
    
    Porcentaje p = Porcentaje("IVA", 21);
    p.imprimirInfo();
    p.setDescripcion("IIBB");
    p.setPorcentaje(30);
    p.imprimirInfo();

}

void test0_persona(){
    Entidad e = Entidad(1566071993, "ivanuntref@gmail.com", 2243);
    e.setDireccion("Av marquez", 2521, 13, 'D');
    e.imprimirInfo();
    Direccion dir = e.getDireccion();
    dir.imprimirInfo();

}

void test1_persona(){
    Cliente c = Cliente("Ivan", 1566071993, "ivanuntref@gmail.com", 2234);
    c.setIva("IVA", 21);
    c.setIibb("IIBB", 10);
    c.setDireccion("Av Marquez", 2521, 13, 'C');
    c.imprimirInfo();


}
//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp
//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp Porcentaje.cpp
int main(){
	test1_persona();
    system("pause");
	return 0;
}