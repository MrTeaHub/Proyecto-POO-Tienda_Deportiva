//
// Created by VILL on 12/02/2023.
//

#include "Creador.h"
//CONSTRUCTORES
Creador::Creador(): Usuario(), rango(""){}
Creador::Creador(string correoUsuario, string contrasena, string rango):
                                            Usuario(correoUsuario,contrasena), rango(rango){}

//GETTERS Y SETTERS
const string &Creador::getRango() const {
    return rango;
}

void Creador::setRango(const string &rango) {
    Creador::rango = rango;
}

//METODOS PROPIOS
int Creador::menu(){
    int opcMenuDueno= 0;
    cout << "Que desea realizar? \n";
    cout << "1)Aniadir objeto al carrito de compras \n";
    cout << "2)Visualizar el contenido del carrito de compras \n";
    cout << "3)Agregar producto a la tienda \n";
    cout << "4)Eliminar producto de la tienda \n";
    cout << "5)Ver mi perfil de usuario \n";
    cout << "6)Cerrar sesion \n";
    cout << "7)Salir \n";
    cin >> opcMenuDueno;

    return opcMenuDueno;
}
int Creador::getTipoUsuario(){
    return 2;
}

void Creador::print(ostream& out){
    out << "Rango del creador: \t" << rango << endl;
}
