#include <iostream>

using namespace std;

int volume(int n){
    float vol;

    vol = (4*3.14*(n*n*n))/3;
    return vol;
}

int main(){
    int n;

    cin >> n;
    volume(n);
}