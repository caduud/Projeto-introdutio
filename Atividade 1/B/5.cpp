#include <iostream>

using namespace std;

int fatorial(int n){
    int i, res = 1, j = 1;

    for(i = 0; i < n; i++){
        res = j * res;
        j++;
    }
    return res;
}

int main(){
    int n;

    cin >> n;
    fatorial(n);
}