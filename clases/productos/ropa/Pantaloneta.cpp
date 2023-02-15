//
// Created by USUARIO on 11/02/2023.
//

#include "Pantaloneta.h"

Pantaloneta::Pantaloneta() : Ropa(), RopaDeportiva(), numeroDeBolsillos(0){}
Pantaloneta::Pantaloneta(const string &nombre, const string &referencia, const string &color, const string &marca,
                         const string &genero, const string &modelo, const string &material, int precio, int garantia,
                         int stock, float talla, const string &tipoDeporte, const string &nombreEquipo, bool equipo,
                         int numeroDeBolsillos) : Ropa(nombre, referencia, color, marca, genero, modelo, material,
                                                       precio, garantia, stock, talla),
                                                  RopaDeportiva(tipoDeporte, nombreEquipo, equipo),
                                                  numeroDeBolsillos(numeroDeBolsillos) {}

int Pantaloneta::getNumeroDeBolsillos() const {
    return numeroDeBolsillos;
}

void Pantaloneta::setNumeroDeBolsillos(int numeroDeBolsillos) {
    Pantaloneta::numeroDeBolsillos = numeroDeBolsillos;
}

string Pantaloneta::conjuntoCamisetaPantaloneta() {
    return (RopaDeportiva::getEquipo()) ? "Si" : "No";
}

ostream &operator<<(ostream &out, Pantaloneta &p) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << p.tipoCategoria() << endl;
    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Tipo de deporte: " << p.getTipoDeporte() << endl;
    cout << "Equipo: " << p.conjuntoCamisetaPantaloneta() << endl;

    if(p.getEquipo()){
        cout << "Nombre del equipo: " << p.getNombreEquipo() << endl;
    }

    cout << "Genero: " << p.getGenero() << endl;
    cout << "Marca: " << p.getMarca() << endl;
    cout << "Color: " << p.getColor() <<endl;
    cout << "Talla: " << p.getTalla() << endl;
    cout << "Precio: " << p.getPrecio() << endl;
    cout << "Stock: " << p.getStock() << endl;
    cout << "Garantia: " << p.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << p.getMaterial() << endl;
    cout << "Referencia: " << p.getReferencia() << endl;
    cout << "Modelo:" << p.getModelo() << endl;
    return out;
}


