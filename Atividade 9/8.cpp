#include <iostream>

using namespace std;

void fun(int x){
    register int y = 10;
    y += x;
    cout << y << endl;
}

int main(){
    static int n = 10;
    fun(15);
    fun(30);
    fun(-5);
}