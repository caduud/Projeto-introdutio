#include <iostream>

using namespace std;

void bissexto(int ano){

    if(ano%4==0 && ano%100!=0){
        cout << ano << " E bissexto";
    }
    else if(ano%400==0){
        cout << ano << " E bissexto";
    }
        else{
            cout << ano << " Nao e bissexto";
        }
}

int main(){
    int n;

    cin >> n;
    bissexto(n);
}