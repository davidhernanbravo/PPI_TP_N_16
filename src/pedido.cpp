#include "../include/pedido.hpp"

#include <iostream>

using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente)
    : codigo(codigo), cliente(cliente) {}

string Pedido::obtenerCodigo()
    {
        return this->codigo;
    }

void Pedido::establecerCliente(Cliente* cliente) 
    {
        this->cliente = cliente;
    }

void Pedido::agregarArticulo(Articulo* articulo) 
    {
        articulos.push_back(articulo);
    }

void Pedido::mostrarPedido()
    {
        cout << "Pedido Codigo Nro: " << codigo << endl;
        cout << "Cliente: " << cliente->obtenerNombre() << " (" << cliente->obtenerCodigo() << "), Domicilio: " << cliente->obtenerDomicilio() << endl;

        cout << "Articulos del pedido:" << endl;
        for (const auto& articulo : articulos) 
            {
                cout << "- " << articulo->obtenerNombre() << " (Codigo: " << articulo->obtenerCodigo() << "), Precio: $" << articulo->obtenerPrecio() << endl;
            }
        cout << endl;
        cout << "---------------------------------------------------------------" << endl;

    }