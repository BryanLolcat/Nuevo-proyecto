#include <iostream>

using namespace std;

void imprimirdigito(int num){
    int a = (num/10000);
    int b = ((num/1000) - (a*10));
    int c = ((num/100)-((a*100)+(b*10)));
    int d = ((num/10)- ((a*1000)+(b*100)+(c*10)));
    int e = ((num/1)-((a*10000)+(b*1000)+(c*100)+(d*10)));
    cout << a << '\t'<< b << '\t' << c << '\t' << d << '\t' << e <<  endl;
}

int contardigitos(int num){

int div = 1;
int cont = 0;

while (div < num ){
    div = div * 10;
    cont++;
}
return cont;
}

bool espalindrome(int num){
    int a = (num/10000);
    int b = ((num/1000) - (a*10));
    int c = ((num/100)-((a*100)+(b*10)));
    int d = ((num/10)- ((a*1000)+(b*100)+(c*10)));
    int e = ((num/1)-((a*10000)+(b*1000)+(c*100)+(d*10)));
    if ((a ==  e)&&(b == d))
        return true;
    else
        return false;


}

int fibonacci(int num ){
    int cont = 2;
    int a=1;
    int b=1;
    while (cont <= num){
        cont++;
        int res = a + b;
        a = b;
        b = res ;
    }
    return b;

}

bool sinumero(char num){
    int trad = static_cast<int>(num);
    if ((47 < trad)&&(trad < 58))
        return true;
    else
        return false;
}

bool siletraMayor(char let){
    int trad = static_cast<int>(let);
    if ((trad >= 65)&&(trad <= 90))
        return true;
    else
        return false;
}

bool siletraMenor(char let){
    int trad = static_cast<int>(let);
    if ((trad >= 97)&&(trad <= 122))
        return true;
    else
        return false;
}

char convMayor(char let){
    int trad = static_cast<int>(let);
    int help;
    if (siletraMenor(let))
        help = trad - 32;
    char cres = static_cast<char>(help);
    return cres;
}

char convMenor(char let){
    int trad = static_cast<int>(let);
    int help;
    if (siletraMayor(let))
        help = trad + 32 ;
    char cres = static_cast<char>(help);
    return cres;

}
int main()
{
    char n ;
    cin >> n ;

    /*imprimirdigito(n);

    cout << contardigitos(n)<< endl;

    cout << espalindrome(n)<< endl;

    cout << fibonacci(n);

    cout << sinumero(n) << endl;*/
    
    if (siletraMayor(n))
        cout << convMenor(n);
    if (siletraMenor(n))
        cout << convMayor(n);
    
    return 0;
}
