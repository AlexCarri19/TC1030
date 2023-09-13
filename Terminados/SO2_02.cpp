#include <string>
#include <iostream>

using namespace std;

class Libro {
    //Atributos
    private:
        string titulo;
        int paginas;
        int codigo;
    //Metodos 
    public:
        void estableceTitulo (string);
        void establecePaginas (int);
        void estableceCodigo (int);
        void imprimir();
};

/*
En las siguientes lineas tenemos los distintos metodos que funcionanan como getters
de los atributos de la clase libro.
*/

void Libro :: estableceTitulo (string titulo_){
    titulo = titulo_; 
}

void Libro :: establecePaginas (int paginas_){
    paginas = paginas_;
}

void Libro :: estableceCodigo (int codigo_){
    codigo = codigo_;
}

void Libro :: imprimir (){
    cout << "Titulo: " << titulo << endl;
    cout << "Paginas: " << paginas << endl;
    cout << "Codigo: " << codigo << endl;
}

int main (){
    /*
    Este conjunto de lineas de codigo son para generar un objeto 
    de clase libro y llenar los atributos 
    */
    Libro libro1 , libro2;
    libro1.estableceTitulo("Maze Runner");
    libro1.establecePaginas(325);
    libro1.estableceCodigo(1234);
    libro1.imprimir();
    cout<<endl;
    libro2.estableceTitulo("Assasins Creed");
    libro2.establecePaginas(500);
    libro2.estableceCodigo(5678);
    libro2.imprimir();
}