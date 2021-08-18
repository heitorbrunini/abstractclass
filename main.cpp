#include <iostream>
#include "ContadePoupanca.h"
#include "ContaCorrente.h"

#include <string>
using namespace std;
int main(){
    ContaCorrente conta1;
    ContaCorrente conta2;

    conta1.setPropietario("João");
    conta1.setLimite(100);
    conta1.setSaldo(1000);

    conta2.setPropietario("Mario");
    conta2.setLimite(50);
    conta2.setSaldo(200);

    conta2.frase();

    cout << conta2.getPropietario() << endl;

    return 0;
}
