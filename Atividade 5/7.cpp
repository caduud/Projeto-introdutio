#include <iostream>

using namespace std;

void subs(int V[5]){
    int i, j = 5, aux;
    for (i = 1; i <= 3; i++){
        aux = V[i];
        V[i] = V[j];
        V[j] = aux;
        j--;
    }
}

int main(){
    int vetor[5], n, i;
    for (i = 1; i <= 5; i++){
        cin >> n;
        vetor[i] = n;
    }
    subs(vetor);
    for (i = 1; i <= 5; i++){
        cout << vetor[i] << endl;
    }
}