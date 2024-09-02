#include <iostream>

using namespace std;

void maiuscula(string *nome){
    for(char & c : *nome){
      c = toupper(c);
    }
}

int main(){
    string nome;

    cin >> nome;
    maiuscula(&nome);
    cout << nome << endl;
}