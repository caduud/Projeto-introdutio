#include <iostream>

using namespace std;

void soma(int *a){
    *a += 10;
}

int main(){
    int n;

    cin >> n;
    soma(&n);
    cout << n << endl;
}