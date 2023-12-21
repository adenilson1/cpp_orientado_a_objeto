#include <iostream>
#include <Windows.h>
using namespace std;

template <class T>
class Stack{
    public:
    void pilha(T array, int max){
        int i {0};
        while (i < max){
            cout << "Os elementos do array são: " << array[i] << endl;
            ++i;
        }

    }
};

int main() {
SetConsoleOutputCP(65001);
    
    Stack <const int*> s;
    //char marray[] = { 'A', 'B', 'C', 'D', 'E', 'F'};
    int marray[] = { 1, 2, 3, 4, 5 ,6};
    int max = sizeof(marray) / sizeof(marray[0]);
    int* pmarray = marray;
    s.pilha(marray, max);
    return 0;
}