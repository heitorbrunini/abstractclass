#include <iostream>
#include <string>
using namespace std;

class ContaCorrente : public ContadePoupanca{
    public:
    void frase(){
        cout << "Bem Vindo"<< endl;
    };
};