#include <iostream>

using namespace std;

int main(){
    float n1 = 7.3, n2, *fp;

    fp = &n1;
    cout << *fp << endl;
    n2 = *fp;
    cout << n2 << endl;
    cout << &n1 << endl;
    cout << fp<< endl;
}

//O valor impresso é o mesmo pois o ponteiro recebe o valor do endereço de memoria de n1 na linha 8