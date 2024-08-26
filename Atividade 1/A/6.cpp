#include <iostream>

using namespace std;

void mult(){
    int b, e, i;

    cin >> b >> e;
    for(i = 1; i < e; i++){
        b = b * e;
    }
    cout << b;
}

int main(){
    mult();
}