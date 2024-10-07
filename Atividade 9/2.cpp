#include <iostream>

using namespace std;

int main(){
    int n=1, *a, n1 = 0;

    a=&n;
    cout << "digite um numero" << endl;
    cin >> n1;
    *a = *a + n1;
    cout << *a << endl;
}