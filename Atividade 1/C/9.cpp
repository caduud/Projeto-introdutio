#include <iostream>

using namespace std;

void graus(float graus){
    float fahren;

    fahren = ((graus*9)/5) + 32;
    cout << fahren << endl;
}

int main(){
    float n;

    cin >> n;
    graus(n);
}