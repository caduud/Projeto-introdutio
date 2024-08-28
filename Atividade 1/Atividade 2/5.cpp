#include <iostream>
#include <ctime>

using namespace std;

double calcularAreaRetangulo(double, double);

int main(){
    double comprimento, largura, area;

    cin >> comprimento >> largura;
    area = calcularAreaRetangulo(comprimento, largura);
    cout << "A area e: " << area;
}

double calcularAreaRetangulo(double comp, double larg){
    double area;

    area = comp * larg;
    return area;
}