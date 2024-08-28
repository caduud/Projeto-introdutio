#include <iostream>
#include <ctime>

using namespace std;

int gerarNumeroAleatorio();

int main(){
    int numero;

    numero = gerarNumeroAleatorio();
    cout << "O numero aleatorio e: " << numero << endl;
}

int gerarNumeroAleatorio(){
    int num;

    srand(time(NULL));
    num = rand()%100;
    return num;
}