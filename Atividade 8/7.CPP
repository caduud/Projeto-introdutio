#include <iostream>

using namespace std;

void minEmax(int *p1, int *p2, int vetor[10]){
    int i;
    *p1 = vetor[0];
    *p2 = vetor[0];
    for(i = 1; i < 10; i++){
        if(*p1 > vetor[i]){
            *p1 = vetor[i];
        }
    }
    for(i = 1; i < 10; i++){
        if(*p2 < vetor[i]){
            *p2 = vetor[i];
        }
    }
    cout << "Menor valor do vetor: " << *p1 << endl;
    cout << "Maior valor do vetor: " << *p2 << endl;
}   

void unico(int vetor1[4], int vetor2[4]){
    int vetor[8], j = 0, k = 0;
    for(int i = 0; i < 8; i++){
        if (i < 4){
            vetor[i] = vetor1[j];
            j++;
        }else{
            vetor[i] = vetor2[k];
            k++;
        }
    }
    cout << "Vetor junto: ";
    for(int i = 0; i < 8; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void dois(int vetor[10]){
    int i, j=0, k=0;
    int v1[5], v2[5];
    for (i = 0; i <= 10; i++){
        if(vetor[i]%2==0){
            v1[j] = vetor[i];
            j++;
        }else{
            v2[k] = vetor[i];
            k++;
        }
    }
    cout << "Valores do vetor par: ";
    for(i = 0; i < 5; i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Valores do vetor impar: ";
    for(i = 0; i < 5; i++){
        cout << v2[i] << " ";
    }
    cout << endl;
}

int main(){
    int v[10]={0,1,7,3,6,9,4,2,8,5};
    int v1[4]={7,3,1,5};
    int v2[4]={2,6,4,8};
    int x, y;
    minEmax(&x, &y, v);
    unico(v1, v2);
    dois(v);
}