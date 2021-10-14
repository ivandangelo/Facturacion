#include "Factura.h"

Head::Head(){
    fecha = '-';
    nroFactura = 0;
}
Head::~Head(){}
void Head::grabarInfoHead(Agente _agent, string _fecha, int _nroFactura){
    agent = _agent;

}
void Head::imprimirInfoHead(){
    agent.imprimirInfo();

}


