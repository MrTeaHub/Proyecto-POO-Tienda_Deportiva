//
// Created by USUARIO on 11/02/2023.
//

#include "Camiseta.h"

Camiseta::Camiseta() : Ropa(), RopaDeportiva(){}
Camiseta::Camiseta(const string &nombre, const string &referencia, const string &color, const string &marca,
                   const string &genero, const string &modelo, const string &material, int precio, int garantia,
                   int stock, float talla, const string &tipoDeporte, const string &nombreEquipo, bool equipo,
                   const string &tipoDeCuello) : Ropa(nombre, referencia, color, marca, genero, modelo, material,
                                                      precio, garantia, stock, talla),
                                                 RopaDeportiva(tipoDeporte, nombreEquipo, equipo),
                                                 tipoDeCuello(tipoDeCuello) {}

const string &Camiseta::getTipoDeCuello() const {
    return tipoDeCuello;
}

void Camiseta::setTipoDeCuello(const string &tipoDeCuello) {
    Camiseta::tipoDeCuello = tipoDeCuello;
}

string Camiseta::conjuntoCamisetaPantaloneta() {
    return (RopaDeportiva::getEquipo()) ? "Si" : "No";
}

ostream &operator<<(ostream &out, Camiseta &c) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << c.tipoCategoria() << endl;
    cout << "Nombre: " << c.getNombre() << endl;
    cout << "Tipo de deporte: " << c.getTipoDeporte() << endl;
    cout << "Equipo: " << c.conjuntoCamisetaPantaloneta() << endl;

    if(c.getEquipo()){
        cout << "Nombre del equipo: " << c.getNombreEquipo() << endl;
    }

    cout << "Genero: " << c.getGenero() << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Color: " << c.getColor() <<endl;
    cout << "Talla: " << c.getTalla() << endl;
    cout << "Precio: " << c.getPrecio() << endl;
    cout << "Stock: " << c.getStock() << endl;
    cout << "Garantia: " << c.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << c.getMaterial() << endl;
    cout << "Referencia: " << c.getReferencia() << endl;
    cout << "Modelo:" << c.getModelo() << endl;
    return out;
}















