//
// Created by VILL on 12/02/2023.
//

#include "Vendedor.h"

Vendedor::Vendedor(): Usuario(), nombreVendedor(""){}
Vendedor::Vendedor( string correoUsuario,  string contrasena, string nombreVendedor):
                                                    Usuario(correoUsuario, contrasena), nombreVendedor(nombreVendedor){}


//GETTER Y SETTER
string &Vendedor::getNombreVendedor() {
    return nombreVendedor;
}
void Vendedor::setNombreVendedor(const string &nombreVendedor) {
    Vendedor::nombreVendedor = nombreVendedor;
}

int Vendedor::menu(){
    int opcMenuVendedor= 0;
    cout << "Que desea realizar? \n";
    cout << "1)Ver los productos disponibles en la tienda \n";
    cout << "2)Agregar producto al carrito de compras \n";
    cout << "3)Visualizar el contenido del carrito de compras \n";
    cout << "4)Agregar producto a la tienda \n";
    cout << "5)Ver mi perfil de usuario \n";
    cout << "6)Cerrar sesion \n";
    cout << "7)Salir \n";
    cin >> opcMenuVendedor;

    return opcMenuVendedor;
}
int Vendedor::getTipoUsuario() {
    return 1;
}
void Vendedor::print(ostream& out){
    cout << "Nombre del comerciante y/o compania: \t" << nombreVendedor;
}

ostream &operator<<(ostream &os, Vendedor *vendedor){
    vendedor->print(os);
    return os;
}


