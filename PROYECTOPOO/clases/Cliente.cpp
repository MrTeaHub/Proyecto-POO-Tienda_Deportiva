//
// Created by VILL on 11/02/2023.
//

#include "Cliente.h"

Cliente::Cliente(): Usuario(), nombreCliente(""){}
Cliente::Cliente(string correoUsuario, string contrasena, string nombreCliente) :
        Usuario(correoUsuario, contrasena), nombreCliente(nombreCliente){}

//GETTERS Y SETTERS
const string &Cliente::getNombreCliente() const {
    return nombreCliente;
}

void Cliente::setNombreCliente(const string &nombreCliente) {
    Cliente::nombreCliente = nombreCliente;
}


int Cliente::menu(){
    int opcMenuCliente= 0;
    cout << "Que desea realizar? \n";
    cout << "1)Ver los productos disponibles en la tienda \n";
    cout << "2)Agregar producto al carrito de compras \n";
    cout << "3)Visualizar el contenido del carrito de compras \n";
    cout << "4)Ver mi perfil de usuario \n";
    cout << "5)Cerrar sesion \n";
    cout << "6)Salir \n";
    cin >> opcMenuCliente;

    return opcMenuCliente;
}

int Cliente::getTipoUsuario(){
    return 0;
}

void Cliente::print(ostream &out) {
    out << "Nombre del usuario: " << nombreCliente;
}




