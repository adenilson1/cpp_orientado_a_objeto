#include <iostream>
#include <Windows.h>
using namespace std;

class Pessoa{
    public:
    void nome(){
        cout << "Adenilson" << endl;
    }
};

class Habilidades : public Pessoa{ // classe Habilidades herda o atributo nome da classe Pessoa
    public:
    void idioma(){
        cout << "Português Brasileiro" << endl;
    }
};

int main() {
    SetConsoleOutputCP(65001);
    Habilidades hab;
    cout << "O nome dele é: ";
    hab.nome();
    cout << "A habilidade dele é: ";
    hab.idioma();
    
    return 0;
}