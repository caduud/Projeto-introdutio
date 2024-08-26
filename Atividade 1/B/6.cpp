#include <iostream>

using namespace std;

int mult(int b, int e){
    int i;

    for(i = 1; i < e; i++){
        b = b * e;
    }
    return b;
}

int main(){
    int b, e;

    cin >> b >> e;
    mult(b, e);
}