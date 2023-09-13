#include <iostream>

using namespace std;

int main (){
    int n , x = 1, m;
    int *ptrm;
    cout << "Cuantos numeros desea probar? ";
    cin >> n;
    for (int i = 0 ; i < n; i++){
        cout << "Introduce numero " << i << ": ";
        cin >> m;
        if (m > x){
            x = m;
        }
    }
    
    ptrm = &m;

    cout << "El valor maximo es: " << *ptrm;

}