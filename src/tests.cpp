#include "../src/Direccion.h"
#include "../src/Persona.h"

void test0_direccion(){
    Direccion d = Direccion("Av Marquez", 2521);
    d.setPiso(13);
    d.setDpto('9');
    d.imprimirInfo();

}

void test1_direccion(){
    Direccion d = Direccion("Av Marquez", 2521);
    d.imprimirInfo();

}

void test0_persona(){
	Persona p = Persona("Ivan", "ivanuntref@gmail.com", 1566071993, 2038889899);
    p.imprimirInfo();

}


int main(){
	test1_direccion();

	return 0;
}