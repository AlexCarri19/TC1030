#include <iostream>
#include <string>

using namespace std;

int main (){
    int a = 1 , b = 2;
    int *ptr;
    cout << "Direccion de la variable a: " << &a << endl;
    cout << "Direccion de la variable b: " << &b << endl;
    ptr = &a;
    cout << "El contenido de la direccion de memoria es: " << *ptr << endl;
    ptr = &b;
    cout << "El contenido de la direccion de memoria es: " << *ptr << endl;
}