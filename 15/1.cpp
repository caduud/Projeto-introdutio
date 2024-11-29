#include<iostream>
using namespace std;

int soma1(int x){
    if(x==0)
        return 0;
    return(x+=soma1(x-1));
}

int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;
    cout<<soma1(n)<<endl;
    return 0;
}