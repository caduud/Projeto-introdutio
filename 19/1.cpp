#include <iostream>
using namespace std;

int busca_binaria(int x, int *v, int n)
{
    int ini = 0;
    int fim = n - 1;
    while (ini <= fim)
    { 
        int i = (ini + fim) / 2;
        if (v[i] == x)
            return i; 
        if (v[i] < x)
            ini = i + 1;
        else
            fim = i - 1;
    }
    return -1;
}

int busca_bin_r(int x, int *v, int inicio, int fim)
{
    if (inicio > fim)
        return -1;

    int meio = (inicio + fim) / 2;
    if (x == v[meio])
        return meio;
    else if (x < v[meio])
        return busca_bin_r(x, v, inicio, meio - 1);
    else
        return busca_bin_r(x, v, meio + 1, fim);
}

int busca_binaria_menos_1(int x, int *v, int n)
{
    int ini = 0;
    int fim = n - 1;
    while (ini <= fim)
    { 
        int i = (ini + fim) / 2;
        if (v[i] == x && i > 0)
            return v[i - 1]; 
        if (v[i] < x)
            ini = i + 1;
        else
            fim = i - 1;
    }
    return -1;
}

int busca_binaria_soma(int x, int *v, int n)
{
    int *p1 = v;
    int *p2 = v + n - 1;
    while (p1 <= p2)
    { 
        if (*p1 + *p2 == x)
            return p1 - v;
        if (*p1 + *p2 < x)
            p1++;
        else
            p2--;
    }
    return -1;
}

int main()
{
    int n = 9;
    int v[n] = {1, 3, 3, 4, 5, 6, 7, 8, 9};
    cout << "Exercicio 1: " << busca_binaria(2, v, n) << endl;
    cout << "Exercicio 2: " << busca_binaria(0, v, n) << endl;
    cout << "Exercicio 3: " << busca_bin_r(3, v, 0, n - 1) << endl;
    cout << "Exercicio 4: " << busca_binaria_menos_1(6, v, n) << endl;
    cout << "Exercicio 5: " << busca_binaria_soma(11, v, n) << endl;
}