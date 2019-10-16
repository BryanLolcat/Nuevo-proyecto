#include <iostream>

using namespace std;

int Itetam_cad(char *cad){
    int tam = 0;
    for (int i = 0; cad[i] != '\0'; i++){
        tam++;
    }
    return tam;
}

int Rectam_cad(char *cad, int c = 0){
    if (cad[c] != '\0'){
        c++;
        return Rectam_cad(cad,c);
    }
    else
        return c;
}

bool ItePalin(char *cad, int tam){
    bool val = true;
    for (int i = 0; i < tam; i++){
        if (cad[i] != cad[tam-1])
            val = false;
        else
            tam--;
    }
    return val;
}
bool RecPalin(char *cad, int tam){



}

void swap (char *cad,int x,int y){
    int c;
    c = *(cad + x);
    *(cad + x) =  *(cad + y);
    *(cad + y) = c;

}

void RevertIter(char *n,int tam){
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

 void RevertRec(char *n,int tam,int c = 0){
    if (c < tam--){
        swap (n,c,tam);
        c++;
        return RevertRec(n,tam,c);
    }
 }

int main()
{
    char cadena[] = "alp";
    int tam = Itetam_cad(cadena);
    cout << Rectam_cad(cadena) << endl;
    cout << cadena << endl;
    cout << tam << endl;
    RevertRec(cadena, tam);
    cout << cadena << endl;
    RevertIter(cadena, tam);
    cout << cadena << endl;
    cout << ItePalin(cadena,tam) << endl;

}
