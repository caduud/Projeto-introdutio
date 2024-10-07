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
    if(a > b){
        cout << "Maior: " << *a << " Endereço: " << a << endl;
        cout << "Menor: " << *b << " Endereço: " << b << endl;
    }else{
        cout << "Maior: " << *b << " Endereço: " << b << endl;
        cout << "Menor: " << *a << " Endereço: " << a << endl;
    }
}