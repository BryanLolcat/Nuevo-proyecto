#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Ingrese el valor : " ;
    cin >> n;
    int cont = 1;
    while (n > 0){
        for (n;n % 10 == 0;n = n / 10){
            cont = cont + 1;
            cout << cont;
        }
    }
    return 0;

}
