#include <iostream>

using namespace std;

int main (){
    int n = 18;
    int a[n];
    for (int i = 0; i <=n ; i++){
        a[i] = i;

    }
    try {
        for (int i = 0; i <=n ; i++){
            cout << a[i] << endl;
            if (i > 10){
                throw "El arreglo es mayor a 10";
            }
        }
    }

    catch (const char *n) {
        cout << n << endl;
    }
}
