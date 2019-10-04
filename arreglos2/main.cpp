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

void swap (int *arr,int x,int y){
    int c;
    c = *(arr + x);
    *(arr + x) =  *(arr + y);
    *(arr + y) = c;

}

void RevertIter(int *n,int tam){
    tam--;
    int x = tam/2;
    int y= 0;
    while (x){
        swap (n,y,tam);
        y++;
        tam--;
        x--;
    }


}
 void RevertRec(int *n,int tam,int c = 0){
    if (c < tam--){
        swap (n,c,tam);
        c++;
        return RevertRec(n,tam,c);
    }
 }

void Burbuja(int *n,int tam){
    bool cambio =true;
    while (cambio){
        cambio= false;
        for (int i = 1;i < tam;i++){
            if (*(n+(i-1)) > *(n+i)){
                swap(n,i-1,i);
                cambio = true;
            }
        }

    }
}

void Insercion(int *n,int tam){



}
int main()
{
    int arr[5]={1,9,7,4,2};
    Imprimir(arr,5);
    cout << SumaIter(arr,5) << endl;
    cout << SumaRec(arr,5) << endl;
    RevertRec(arr,5);
//    RevertIter(arr,5);
    Imprimir(arr,5);
//    Imprimir(arr,5);
    Burbuja(arr,5);
    Imprimir(arr,5);
}
