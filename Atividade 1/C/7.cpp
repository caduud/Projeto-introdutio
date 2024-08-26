#include <iostream>

using namespace std;

int volume(int raio){
    float vol;

    vol = 3.14*raio*raio;
    return vol;
}

int main(){
    int n;

    cin >> n;
    volume(n);
}