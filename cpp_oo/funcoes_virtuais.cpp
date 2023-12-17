#include <iostream>
#include <Windows.h>
using namespace std;

class Mae{
    public:
    virtual void messagem(){ // funcao virtual
        cout << "Eu sou a mãe" << endl;
    }
};

class Filha : public Mae{
    public:
    void messagem(){
        cout << "Eu sou a filha" << endl;
    }
};

class Neta : public Filha{
    public:
    void messagem(){
        cout << "Eu sou a neta" << endl;
    }
};

void responde(Mae* m){
    m->messagem();
}

int main() {
SetConsoleOutputCP(65001);

    Mae m;
    Filha f;
    Neta n;

    m.messagem();
    f.messagem();
    n.messagem();

    cout << "----------------------------------" << endl;
    cout << "chamar por funcao virtual" << endl;

    responde(&m);
    responde(&f);
    responde(&n);


    
    return 0;
}