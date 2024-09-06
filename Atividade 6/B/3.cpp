//bool has_zero(int a[], int n) {
//  int i;
//  for (i = 0; i < n; i++)
//      if (a[i] == 0)
//          return true;
//      else
//          return false;
//}

//O erro está que ele só verifica o valor do primeiro indice e não de todo o vetor  

bool has_zero(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    return false;
}



