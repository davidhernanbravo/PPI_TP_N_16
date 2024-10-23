#include "../include/cliente.hpp"

using namespace std;

Cliente::Cliente(string codigo, string nombre, string domicilio)
    : codigo(codigo), nombre(nombre), domicilio(domicilio) {}

string Cliente::obtenerCodigo()
    {
        return this->codigo;
    }

string Cliente::obtenerNombre()
    {
        return this->nombre;
    }

string Cliente::obtenerDomicilio()
    {
        return this->domicilio;
    }