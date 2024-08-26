#include <iostream>

using namespace std;

void parOuImpar(){
    int n;

    cin >> n;
    if(n%2==0){
        cout << n << " E par" << endl;
    }
    else{
        cout << n << " E impar" << endl;
    }
}

int main(){
    parOuImpar();
}