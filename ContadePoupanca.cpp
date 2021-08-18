#include "ContadePoupanca.h"
#include <string>

ContadePoupanca::ContadePoupanca()
{
    //ctor
}

ContadePoupanca::~ContadePoupanca()
{
    //dtor
}

float ContadePoupanca::getLimite(){
    return limitesaque;
}

float ContadePoupanca::getSaldo(){
    return saldo;
}
string ContadePoupanca::getPropietario(){
    return propietario;
}

void ContadePoupanca::setLimite(float limitesaque){
    this->limitesaque = limitesaque;
}

void ContadePoupanca::setPropietario(string propietario){
    this->propietario = propietario;
}

void ContadePoupanca::setSaldo(float saldo){
    this->saldo = saldo;
}







