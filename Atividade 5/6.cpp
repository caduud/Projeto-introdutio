#include <iostream>

using namespace std;

void sub(int *a){
    *a -= 5;
}

int main(){
    int n;

    cin >> n;
    sub(&n);
    cout << n << endl;
}