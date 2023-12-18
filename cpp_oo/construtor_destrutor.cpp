#include <iostream>
#include <Windows.h>
#include <ncurses.h>
using namespace std;
    
class Qualquer{

    public:
    Qualquer(){ // construtor . nota é sempre bom colocar o construtor no inicio  e pode-se
    // sobre carregar o construtor, ja o destrutor não.
        initscr();
    }
    void uma_funcao_membro_qualquer(){
        printw("Uma funcão membro qualquer");
        refresh();
    }

    void outra_funcao_membro_qualquer(){
        move(3, 20);
        printw("Outra funcao membro qualquer");
    }
    ~Qualquer(){ // destrutor. nota é sempre bom colocar o destrutor no fim
        getch();
        endwin();
    }
};

int main() {
SetConsoleOutputCP(65001);
    Qualquer q;
    q.uma_funcao_membro_qualquer();
    q.outra_funcao_membro_qualquer();
    return 0;
}