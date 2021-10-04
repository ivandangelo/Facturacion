#include "Entidad.h"
#include "Porcentaje.h"

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
    Entidad ent("1566071993", "ivanuntref@gmail", "20-38889899-3");
    ent.imprimirInfo();
    ent.grabarInfoEntidad("Av Marquez", 2521, 13, '9', "1566071859", "juanperez@yahoo.com", "20-1234567-3");
    ent.imprimirInfo();
    Direccion direDeEnt = ent.getDireccion();
    direDeEnt.imprimirInfo();
    direDeEnt.grabarInfoDireccion("Nueva calle", 2000, 10, 'D');
    ent.setDireccion(direDeEnt);
    ent.imprimirInfo();


}

//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp
//g++ -g -o tests tests.cpp Direccion.cpp Entidad.cpp Porcentaje.cpp

int main(){
    test0Direccion();
    cout << "####################################################\n";
    test0Porcentaje();
    cout << "####################################################\n";
    test0Entidad();
    cout << "####################################################\n";
    system("pause");
	return 0;
}