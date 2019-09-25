#include <iostream>

using namespace std;

void Imprimir(int n[],int tam){
    int i = 0;
    while (i < tam){
        cout << n[i] << endl;
        i++;
    }
}
int SumaIter(int n[],int tam){
    int i = 0;
    int suma = 0;
    while (i < tam){
        suma += n[i];
        i++;
    }
    return suma ;
}

/*int SumaRec(int n[],int tam){
    int i = 0;
    if (tam == 1)
        return n[i];
    if (tam != 1)
        return (n[(tam-1)] + SumaRec(n[],(tam-1));
}*/

void RevertIter(int n[],int tam){
    int i = 0;
    while (i < (tam/2)){
        int c;
        c = n[i];
        n[i] = n[tam-i];
        n[tam-i] = c;
        i++;
    }

}


int main()
{
    int arr[]={1,2,3,4,5};
    Imprimir(arr,5);
    cout << SumaIter(arr,5);
}
