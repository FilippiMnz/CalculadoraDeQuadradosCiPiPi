#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int Tamanho, numeros;
    cout << "qual o tamanho da Lista? " << endl;
    cin >> Tamanho;
    Tamanho--;
    while(0 <= Tamanho){
        cout << "Insira um numero" << endl;
        cin >> numeros;
        int quadrado = numeros * numeros;
        cout << "A raiz do seu numero é " << quadrado << endl;
        Tamanho--;
    }
        return 0;
}
