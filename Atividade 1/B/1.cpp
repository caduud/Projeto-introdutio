#include <iostream>

using namespace std;

string mult(int n){
    if(n%4==0){
        return "E multiplo de 4";
    }
    else{
        return "Nao e multiplo de 4";
    }
}

int main(){
    int n;

    cin >> n;
    mult(n);
}