#ifndef CLASES_H
#define CLASES_H

#include <string>
#include <vector>

using namespace std;

class Noticia {
private:
    string titulo;
    string contenido;
    int dia;
    int anio;
    int mes;

public:
    Noticia(string _titulo, string _contenido, int _dia, int _anio, int _mes);
    string getTitulo();
    string getContenido();
    void getFechaPublicacion();
    void mostrarNoticia();
};

class Autor {
private:
    int dni;
    string nombre;
    string medio;
    vector<Noticia> noticias;

public:
    Autor();

    int getDni() ;
    string getNombre() ;
    string getMedio() ;

    void crearAutor();
    void agregarNoticia( Noticia _noticias);
    void mostrarNoticias() ;
};

#endif
