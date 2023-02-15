//
// Created by VILL on 11/02/2023.
//

#ifndef TIENDA_DEPORTIVA_MAIN_PRODUCTO_H
#define TIENDA_DEPORTIVA_MAIN_PRODUCTO_H

#include <iostream>

using namespace std;

class Producto {
private:
    string nombre;
    int precio;
public:
    Producto();
    Producto(string nombre, int precio);

    string getNombre();
    void setNombre(const string &nombre);

    int getPrecio();

    void setPrecio(int precio);

    friend ostream &operator<<(ostream &os,  Producto *producto);

};


#endif //TIENDA_DEPORTIVA_MAIN_PRODUCTO_H
