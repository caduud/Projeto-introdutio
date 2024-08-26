#include <iostream>

using namespace std;

void mult(){
    int n;

    cin >> n;
    if(n%4==0){
        cout << n << " E multiplo de 4" << endl;
    }
    else{
        cout << n << " Nao e multiplo de 4" << endl;
    }
}

int main(){
    mult();
}