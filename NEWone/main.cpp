#include <iostream>
using namespace std;
int main() 
{
    int a;
    int b;
    int c;
    cout << "Ingrese el primer valor: " ;
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "Ingrese tercer valor: " ;
    cin >> c;
    if ( a > b && a > c)
        cout << "El primero es mayor";
    if ( b > a && b > c)
        cout << "El segundo valor es mayor";
    if ( c > a && c > b)
        cout << "El tercer valor es mayor"
    else 
        cout << "Dos o mas valores son iguales";

}
