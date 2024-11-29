#include<iostream>
using namespace std;

int tribonacci(int n){
    if((n==0)&&(n==1))
        return 0;
    if(n==2)
        return 1;
    if(n>2)
        return(tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3));
}

int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;
    cout<<tribonacci(n);
    return 0;
}