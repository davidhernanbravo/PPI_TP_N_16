#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <vector>
#include <string>

#include "articulo.hpp"
#include "cliente.hpp"

using namespace std;

class Pedido 
    {
    private:
        string codigo;
        Cliente* cliente;
        vector<Articulo*> articulos;

    public:
        Pedido(string codigo, Cliente* cliente);

        string obtenerCodigo();
        void establecerCliente(Cliente* cliente);
        void agregarArticulo(Articulo* articulo);
        void mostrarPedido();
    };

#endif