#include <iostream>

using namespace std;

void fun(int x){
    static int y = 10;
    y += x;
    cout << y << endl;
}

int main(){
    static int n = 10;
    fun(10);
    fun(50);
    fun(-5);
}