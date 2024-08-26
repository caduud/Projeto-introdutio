#include <iostream>

using namespace std;

int mult(int a, int b){
    int i, res = 0;

    for(i = a; i <= b; i++){
        res = a + res;
        a++;
    }
    return res;
}

int main(){
    int a, b;

    cin >> a >> b;
    mult(a, b);
}