#include <iostream>
using namespace std;

class Hello{
    public:
    void helloword(){
        cout << "Ola Mundo!, iniciando com c++ orientado a objeto"<< endl;

    }
};

int main() {
    Hello hello;
    hello.helloword();

    return 0;
}