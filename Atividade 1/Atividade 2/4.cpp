#include <iostream>
#include <ctime>

int max = 100;

int ate(int);

int main(){
    int numero;

    std::cin >> numero;
    ate(numero);
}

int ate(int num){
    int i;

    if (num < max){
        for (i = num; i < max; i++){
            std::cout << i <<" ";
        } 
    }
    else{
        max = num + 50;
        for(i = num; i < max; i++){
            std::cout << i << " ";
        }
    }
}