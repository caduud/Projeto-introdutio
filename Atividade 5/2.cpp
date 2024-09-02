#include <iostream>

using namespace std;

void mult(int a, int b, int *res){
    *res = a * b;
}

int main(){
    int n1, n2, res = 0;

    cin >> n1 >> n2;
    mult(n1, n2, &res);
    cout << res << endl;
}