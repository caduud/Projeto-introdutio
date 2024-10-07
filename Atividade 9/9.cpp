#include <iostream>

using namespace std;

int main(){
    int v[5] = {5,4,3,2,1}, *a;
    a = v;
    cout << *a << endl;
    *a++;
    cout << *a << endl;
    *a++; 
    cout << *a << endl;
    *a++; 
    cout << *a << endl;
    *a++; 
    cout << *a << endl;
    cout << endl;
    cout << *a << endl;
    *a--; 
    cout << *a << endl;
    *a--; 
    cout << *a << endl;
    *a--; 
    cout << *a << endl;
    *a--; 
    cout << *a << endl;
}