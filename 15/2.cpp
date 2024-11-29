#include<iostream>
using namespace std;


int conta_digitos(int n) {
    if (n == 0) 
        return 0;
    return 1 + conta_digitos(n / 10);
}


int main(){
    int x;
    cout<<"Digite um numero: ";
    cin>>x;
    cout<<conta_digitos(x)<<endl;
    return 0;
}