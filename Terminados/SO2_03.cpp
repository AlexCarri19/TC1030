#include <iostream>

using namespace std;

class cuenta {
    private:
       double saldo;
    public:
        cuenta (double);
        void credit ();
        void cargar ();
        void obtenerSaldo ();
};

cuenta :: cuenta (double saldo_){
    if (saldo_ > 0){
        cout << "Aprobado \n Saldo:"<< saldo_ <<endl;
        saldo = saldo_;
    }
    else {
        cout << "Error \n Saldo establecido en 0 \n";
        saldo = 0;
    }
}

void cuenta :: credit (){
    double n;
    cout << "Cuanto desea avonar a su cuenta: ";
    cin >> n;
    saldo = saldo + n;
}

void cuenta :: cargar (){
    double n;
    cout << "Cuanto desea retirar de su cuenta: ";
    cin >> n;
    if (n < saldo){
        saldo = saldo - n;
    }
    else {
        cout << "El monto a cargar excede el saldo de la cuenta. \n";
    }
}

void cuenta :: obtenerSaldo (){
    cout << "Su saldo es: " << saldo<< endl;
}

int main (){
    cuenta c1(10);
    c1.credit();
    c1.cargar();
    c1.obtenerSaldo();

    cuenta c2(-1);
    c2.credit();
    c2.cargar();
    c2.obtenerSaldo();
}