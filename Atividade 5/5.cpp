#include <iostream>

using namespace std;

int sub(int a){
    a -= 5;
    return a;
}

int main(){
    int n;
    
    cin >> n;
    cout << sub(n) << endl;
}