#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class circulo{
    private:
        double radio;
    public:
        circulo(double radio);
        void getRadio();
        double area();
        double perimetro ();        
};

circulo :: circulo (double radio){
    void getRadio();
}

void circulo :: getRadio(){
    double radio_1;
    cout<<"Cual es el radio de tu circulo : \n";
    cin>>radio_1;
    radio = radio_1;
}

double circulo :: area(){
    double res;
    res = (3.1416) * pow(radio , 2.0);
    return (res);
}

double circulo :: perimetro (){
    double res;
    res = (3.1416) * 2 * radio;
    return res;
}

int main (){
    circulo c1(0.0);
    c1.getRadio();
    cout << "Area: " << c1.area() << endl;
    cout << "Perimetro: " << c1.perimetro()<< endl;

}
//Ejempos de clase 2.1
/*
class curso {
    public:
        curso (string nombre){      //constructor
            establecerNombre(nombre);
        }

        void establecerNombre (string nombre){
            nombreCurso = nombre;
        }

        string obtenerNombre(){
            return nombreCurso;
        }

        void mostrarMensaje(){
            cout<<"Curso solicitado: "<<obtenerNombre()<<endl;
        }
    
    private:
        string nombreCurso;
};

int main(){
    
    curso curso1("Matematicas Radioactivas");

    cout<<" Curso1 se refiere a: "<<curso1.obtenerNombre();
}
*/