#include <iostream>
#include <string>

using namespace std;

class Video {
    protected:
        string tipoVideo;
        string nombreVideo;
        string genero;
        int calificacion;
        int anLanzamiento;
        int duracionH;
    public: 
        Video (string , string , string , int , int , int);
        void set_cali ();
        string get_tipo ();
        string get_nombre ();
        int get_cali ();
        virtual void muestraDatos ();
};

class Serie : public Video{
    protected: 
        string nomEpisodio;
        int temporada;
        int episodio;
    public:
        Serie (string , string , string , int , int , int , string , int , int);
        void muestraDatos ();
};

class Pelicula : public Video {
    protected: 
        string nominaciones;
    public: 
        Pelicula (string , string , string , int , int , int , string);
        void muestraDatos ();
};

const int m = 20;

class Stream {
    private: 
        Video *video [m];
        int numVideos;

    public:
        Stream ();
        void calificaVideos ();
        void crearEj ();
        void buscarCali ();
        void mostrarS ();  
        void mostrarP (); 
};

