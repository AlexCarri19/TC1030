#include <iostream>
#include <string>

using namespace std;

class bebidas {
    public:
        string sabor;
        int mili;

        bebidas (string , int);
        virtual void mostrar ();
};

bebidas :: bebidas (string _sabor , int _mili) {
    sabor = _sabor;
    mili = _mili;
}

void bebidas :: mostrar (){
    cout << "Sabor bebida: " << sabor << endl;
    cout << "Contenido: " << mili << " mililitros \n";
}

class naturales : public bebidas {
    public: 
        double cal;

        naturales (string , int , double);
        void mostrar ();
};

naturales :: naturales (string _sabor , int _mili , double _cal) : bebidas (_sabor , _mili){
    cal = _cal;
}

void naturales :: mostrar (){
    bebidas :: mostrar ();
    cout << "Calorias: " << cal << endl;
}

int main (){
    bebidas *ptr[2];
    ptr[0] = new naturales ("Jugo del valle" , 200 , 50.1);
    ptr[1] = new naturales ("Jugo Sonora" , 500 , 100.05);

    cout << endl;
    ptr[0] -> mostrar();
    cout << "\n \n";
    ptr[1] -> mostrar();
    cout << endl;
}

