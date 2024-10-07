#include <iostream>

using namespace std;

int main(){
    int n1 = 0, *a, *b, n2 = 0, total;

    cout << "digite um numero" << endl;
    cin >> n1;
    cout << "digite outro numero" << endl;
    cin >> n2;
    a = &n1;
    b = &n2;
    if(n1 > n2){
        cout << "Maior: " << *a << endl;
        cout << "Menor: " << *b << endl;
    }else if(n1 == n2){
        cout << "Iguais" << endl;
    }else{
        cout << "Maior: " << *b << endl;
        cout << "Menor: " << *a << endl;
    }
}