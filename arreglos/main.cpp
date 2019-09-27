#include <iostream>

using namespace std;

void Imprimir(int n[],int tam){
    int i = 0;
    while (i < tam){
        cout << n[i];
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

int SumaRec(int n[],int tam){
    if (tam == 1)
        return n[0];
    else
        return n[tam-1] + SumaIter(n,tam-1);
}


void RevertIter(int n[],int tam){
    int i = 0;
    tam--;
    while (i < (tam/2)){
        int c;
        c = n[i];
        n[i] = n[tam-i];
        n[tam-i] = c;
        i++;
    }

}
 void RevertRec(int n[],int tam){
    int i = 0;
    tam--;
    if (tam > i)
        int c;
        int c;
        c = n[i];
        n[i] = n[tam-i];
        n[tam-i] = c;
        i++;
        return RevertRec(n,tam);

 }

int main()
{
    int arr[]={1,2,3,4,5};
    Imprimir(arr,5);
    cout << SumaIter(arr,5) << endl;
    cout << SumaRec(arr,5) << endl;
    RevertRec(arr,5);
    Imprimir(arr,5);
}
