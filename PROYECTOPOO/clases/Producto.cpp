//
// Created by VILL on 11/02/2023.



#include "Producto.h"
Producto::Producto(): precio(0){}
Producto::Producto(string nombre, int precio): nombre(nombre), precio(precio) {}

    string Producto::getNombre(){
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;


}
int Producto::getPrecio() {
    return precio;
}

void Producto::setPrecio(int precio) {
    Producto::precio = precio;
}

ostream &operator<<(ostream &os, Producto *producto) {
    cout << "nombre: " << producto->getNombre() << " precio: " << producto->getPrecio();
    return os;
}


