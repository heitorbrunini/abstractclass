#ifndef CONTADEPOUPANCA_H
#define CONTADEPOUPANCA_H

#include <iostream>
#include <string>
using namespace std;

class ContadePoupanca
{
    public:
        ContadePoupanca();
        virtual ~ContadePoupanca();

        void setSaldo(float saldo);
        void setLimite(float limitesaque);
        void setPropietario(string propietario);

        float getLimite();
        float getSaldo();
        string getPropietario();

        virtual void frase() = 0;

    private:
        float saldo;
        float limitesaque;
        string propietario;
};

#endif // CONTADEPOUPANCA_H
