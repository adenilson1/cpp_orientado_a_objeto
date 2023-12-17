#include <iostream>
#include <Windows.h>
using namespace std;

class Pessoa{
    private:
    int idade = 27;
    protected:
    double altura = 1.72;
    public:
    void nome(){
        cout << "Adenilson" << endl;
    }

    int pessoaIdade(){
        return idade;
    }
};

class Habilidades : public Pessoa{ // classe Habilidades herda o atributo nome da classe Pessoa
    
    public:
    void idioma(){
        cout << "Português Brasileiro" << endl;
    }
    
    double pessoaAltura(){
        return altura;
    }
};

class Dados : public Habilidades{

};

int main() {
SetConsoleOutputCP(65001);
    Dados dados;
    cout << "O nome dele é: ";
    dados.nome();
    cout << "A habilidade dele é: ";
    dados.idioma();
    cout << "A idade dele é: " << dados.pessoaIdade() << endl;
    cout << "A altura dele é: " << dados.pessoaAltura() << endl;
    return 0;
}