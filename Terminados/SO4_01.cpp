#include <iostream>

using namespace std;

int main (){
    int a , b;
    int *ptra , *ptrb;
    cout << "Introduce un numero entero: ";
    cin >> a;
    cout << "Introduce otro numero entero: ";
    cin >> b;

    ptra = &a;
    ptrb = &b;

    cout << "Valor ptrA es igual a " << *ptra <<endl;
    cout << "ptrA esta almacenado en " << &ptra << endl;

    cout << "Valor ptrB es igual a " << *ptrb <<endl;
    cout << "ptrB esta almacenado en " << &ptrb << endl;
}