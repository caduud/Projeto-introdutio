#include <iostream>

using namespace std;

string parOuImpar(int numero){
    if(numero%2==0){
        return "Par";
    }
    else{
       return "Impar";
    }
}

int main(){
    int n;

    cin >> n;
    parOuImpar(n);
}