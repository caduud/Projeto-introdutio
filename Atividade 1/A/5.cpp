#include <iostream>

using namespace std;

void fatorial(){
    int n, i, res = 1, j = 1;

    cin >> n;
    for(i = 0; i < n; i++){
        res = j * res;
        j++;
    }
    cout << res << endl;
}

int main(){
    fatorial();
}