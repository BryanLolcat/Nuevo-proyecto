#include <iostream>

using namespace std;

void Imprimir(int *n,int tam){
    while (tam--){
        cout << *n << " ";
        n++;
    }
}

int SumaIter(int *n,int tam){
    int suma;
    while (tam--){
        suma += *n;
        n++;
    }
    return suma;
}
int SumaRec(int *n,int tam){
    if (tam == 1)
        return *n;
    else
        return n[tam - *n] + SumaRec(n,tam-1);
}


void RevertIter(int n[],int tam){
    tam--;
    while ((tam/2)--){
        int c ;
        c = *n;
        *n = *(n+(tam-*n));
        *(n+(tam-*n)) = c;
        n++;
    }


}
 void RevertRec(int n[],int tam){


 }

int main()
{
    int arr[]={1,2,3,4,5};
    Imprimir(arr,5);
    cout << SumaIter(arr,5) << endl;
    cout << SumaRec(arr,5) << endl;
/*    RevertRec(arr,5);
    Imprimir(arr,5);
*/}
