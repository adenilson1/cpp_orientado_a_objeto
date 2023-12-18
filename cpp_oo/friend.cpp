#include <iostream>
#include <Windows.h>
using namespace std;

class Casa {
    public:
    string comp = "123";

    protected:
    char essid[5] = {'H', 'o', 'm', 'e', '\0'};

    private:
    string passwd = "abc" + comp;

    friend class Vizinho;


};

class Vizinho{
    public:
    void controller(){
        Casa c;
        cout << "Olá vizinho, a REDE é : " << c.essid << endl;
        cout << "E a senha é: " << c.passwd << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001);
    Vizinho v;
    v.controller();

    return 0;
}