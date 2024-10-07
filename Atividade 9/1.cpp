#include <iostream>

using namespace std;

int main(){
    int n=1, *a;

    a=&n;
    a++;
    a--;
    cout << *a << endl;
}