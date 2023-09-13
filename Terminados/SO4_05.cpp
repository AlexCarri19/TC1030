#include <iostream>
#include <string>

using namespace std;

int main (){
    int ar1 [5];

    int *ptra , *ptrb;
    ptra = &ar1[0];
    ptrb = &ar1[4];

    cout << "Distancia de memoria: " << (ptrb - ptra) << endl;

    cout << "Direccion de memoria a (principio): " << ptra <<endl; 
    cout << "Direccion de memoria b (fin): " << ptrb <<endl; 
    cout << (ptra - ptrb) << endl;
    ptra = ptra + 1;
    cout << "Posicion apuntador nuevo (a): " << ptra << endl;;
    cout << "Valor en apuntador: " << *ptra << endl;
}