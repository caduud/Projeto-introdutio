#include <iostream>

using namespace std;

void mult(){
    int a, b, i, res = 0;

    cin >> a >> b;
    for(i = a; i <= b; i++){
        res = a + res;
        a++;
    }
    cout << res << endl;
}

int main(){
    mult();
}