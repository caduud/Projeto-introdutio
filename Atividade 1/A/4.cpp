#include <iostream>

using namespace std;

void volume(){
    int n;
    float vol;

    cin >> n;
    vol = (4*3.14*(n*n*n))/3;
    cout << vol;
}

int main(){
    volume();
}