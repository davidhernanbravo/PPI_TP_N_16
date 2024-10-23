/* Una Empresa que vende "Cosméticos" nos convoca para la realización de una App que permita registrar 
los Pedidos de Artículos de los Clientes.

La misma debe permitir:
1. Cargar Artículos
2. Cargar Clientes
3. Cargar Pedidos de Artículos Asignados a los Clientes
4. Mostrar los Pedidos de los Clientes

La aplicación deberá realizarse Implementando los Objetos Correspondientes.
Deberá mostrar por consola los Pedidos de los Clientes.
Se aconseja usar clases y un Array de Objetos.

Nota: Tome nota de lo que se pide. Responda las consignas como se han establecido. 
No "haga" de más, tampoco de "menos".
Para aprobar será necesario contar con más del 60% de las consignas aprobadas.*/

#include <iostream>

#include "include/articulo.hpp"
#include "include/cliente.hpp"
#include "include/pedido.hpp"

int main()
    {
        // Crear algunos artículos:
        Articulo* articulo1 = new Articulo("A001", "Jabon Cito", 159.99);
        Articulo* articulo2 = new Articulo("A002", "Shampoo Casposon", 6000.00);
        Articulo* articulo3 = new Articulo("A003", "Aqua di Zorrino", 90500.50);
        Articulo* articulo4 = new Articulo("A004", "Desodorante Cebollin", 2500.00);

        // Crear algunos clientes:
        Cliente* cliente1 = new Cliente("C001", "Silvana Vegante", "Sanatas 666");
        Cliente* cliente2 = new Cliente("C002", "Hernan Tiguo", "Gobernado 6999");
        Cliente* cliente3 = new Cliente("C003", "Manuela Mida", "Pinocho 1005");

        // Crear pedidos para clientes:
        Pedido* pedidoCliente1 = new Pedido("O001", cliente1);
        pedidoCliente1->agregarArticulo(articulo1);
        pedidoCliente1->agregarArticulo(articulo2);

        Pedido* pedidoCliente2 = new Pedido("O002", cliente2);
        pedidoCliente2->agregarArticulo(articulo2);
        pedidoCliente2->agregarArticulo(articulo3);

        Pedido* pedidoCliente3 = new Pedido("O003", cliente3);
        pedidoCliente3->agregarArticulo(articulo1);
        pedidoCliente3->agregarArticulo(articulo4);
           
        //Mostrar pedidos:
        cout << "****************************" << endl;
        cout << "PERFUMERIA EL SOBACO OLOROSO" << endl;
        cout << "****************************" << endl;
        cout << endl;
        cout << "LISTA DE PEDIDOS:" << endl;
        cout << endl;
        
        pedidoCliente1->mostrarPedido();
        pedidoCliente2->mostrarPedido();
        pedidoCliente3->mostrarPedido();

        // Liberar la memoria
        delete articulo1;
        delete articulo2;
        delete articulo3;
        delete articulo4;
        delete cliente1;
        delete cliente2;
        delete cliente3;
        delete pedidoCliente1;
        delete pedidoCliente2;
        delete pedidoCliente3;
        
        return 0;
    }