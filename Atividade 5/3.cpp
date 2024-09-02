#include <iostream>

using namespace std;

int soma(int a){
    a += 10;
    return a;
}

int main(){
    int n;

    cin >> n;
    cout << soma(n) << endl;
}