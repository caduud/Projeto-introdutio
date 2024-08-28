// As funções que tem Void no inicio não tem retorno
// apenas na função dobro e na função aleat 
// A função dobro e mostrar_dobro recebem um parametro com o valor do numero aleatorio gerado na funcao aleat
#include <iostream>
#include <ctime>

using namespace std;

void bom_dia();
int aleat();
int dobro(int);
void mostra_dobro(int);

int main(){
	int x, num;
 
	bom_dia();
	printf("%d", aleat());
	x = aleat(); 	 
	num += dobro(x);
	if (dobro(x) >= dobro(aleat())){
    		mostra_dobro(x);
	}
	return 0;
}

void bom_dia(){
    cout << "Bom dia" << endl;
}

int aleat(){
    int numero;

    srand(time(NULL));
    numero = rand()%100;
    return numero;
}

int dobro(int num){
     int dobro;

     dobro = num * 2;
     return dobro;
}

void mostra_dobro(int num){
    int dobro;

    dobro = num * 2;
    cout << " O dobro e :" << dobro << endl;
}
