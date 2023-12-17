#include <iostream>
#include <Windows.h>
using namespace std;

class Pessoa{
    public:
    int num(){
        return 10;
    }

    int num(int num){
        return num;
    }
};

class Turma : public Pessoa{
    public:
    int num(){
        return 50;
    }

    int num(int num){
        return num;
    }

};

int main() {
SetConsoleOutputCP(65001);
    
    Pessoa pessoa;
    Turma turma;

    cout << "num() de Pessoa é: " << pessoa.num() << endl;
    cout << "num(int num) de Pessoa é: " << pessoa.num(999) << endl;
    cout << "num() de Turma é: " << turma.num() << endl;
    cout << "num(int num) de Turma é: " << pessoa.num(123) << endl;

    return 0;
}