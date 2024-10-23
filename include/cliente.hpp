#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente 

    {
    private:
        string codigo;
        string nombre;
        string domicilio;

    public:
        Cliente(string codigo, string nombre, string domicilio);

        string obtenerCodigo();
        string obtenerNombre();
        string obtenerDomicilio();
    };

#endif