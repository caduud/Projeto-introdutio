#include<iostream>
using namespace std;

int soma_par(int x){
    if(x==0)
        return 0;
    if(x%2==0)
        return(x+soma_par(x-2));
    if(x%1==0)
        return(x-1+soma_par(x-3));
}

int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;
    cout<<soma_par(n)<<endl;
    return 0;
}