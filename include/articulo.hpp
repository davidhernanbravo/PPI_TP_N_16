#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <string>

using namespace std;

class Articulo 
    {
    private:
        string codigo;
        string nombre;
        double precio;

    public:
        Articulo(string codigo, string nombre, double precio);

        string obtenerCodigo();
        string obtenerNombre();
        double obtenerPrecio();
    };

#endif