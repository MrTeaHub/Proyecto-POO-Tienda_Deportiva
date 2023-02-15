//
// Created by VILL on 11/02/2023.
//

#ifndef TIENDA_DEPORTIVA_MAIN_CARRITODECOMPRA_H
#define TIENDA_DEPORTIVA_MAIN_CARRITODECOMPRA_H

#include <iostream>
#include <vector>
#include "Producto.h"
#include "../INTERFACES/Menu.h"
#include "Tienda.h"


class CarritoDeCompra: public Menu{
    int numeroDeProductos;
    vector <Producto*> productosCarrito;
public:
    CarritoDeCompra();
    CarritoDeCompra(vector<Producto *> &productosCarrito);


    int getNumeroDeProductos();
    void setNumeroDeProductos();
    vector<Producto *> &getProductosCarrito();
    void setProductosCarrito(const vector<Producto *> &productosCarrito);


    void operator +(Tienda productosDisponibles);
    void operator -(int posicion);
    int menu()override;

    friend ostream& operator<<(ostream &out, CarritoDeCompra c);

};


#endif //TIENDA_DEPORTIVA_MAIN_CARRITODECOMPRA_H
