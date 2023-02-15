//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_CARRITODECOMPRA_H
#define TIENDADEPORTIVA_CARRITODECOMPRA_H

#include <iostream>
#include <vector>
#include "../clases_abstractas/Producto.h"
#include "../INTERFACES/Menu.h"
#include "../interfaces/Compra.h"
#include "Tienda.h"


class CarritoDeCompra: public Menu, public Compra {
private:
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
    void calcularPrecioTotal() override;
    friend ostream& operator<<(ostream &out, CarritoDeCompra c);

};


#endif //TIENDADEPORTIVA_CARRITODECOMPRA_H
