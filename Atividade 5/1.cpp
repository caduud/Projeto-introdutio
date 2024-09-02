#include <iostream>

using namespace std;

int mult(int a, int b){
    int res;

    res = a * b;
    return res;
}

int main(){
    int n1, n2;

    cin >> n1 >> n2;
    cout << mult(n1, n2) << endl;
}