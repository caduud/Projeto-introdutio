#include <iostream>

using namespace std;

void MaiorMenor(int *a, int *b){
    int aux;
    
    if(*a > *b){
        aux = *b;
        *b = *a;
        *a = aux;
    }
}

int main(){
    int a, b;

    cin >> a >> b;
    MaiorMenor(&a, &b);
    cout << "O menor valor: " << a << endl << "O maior valor: " << b << endl;;
}