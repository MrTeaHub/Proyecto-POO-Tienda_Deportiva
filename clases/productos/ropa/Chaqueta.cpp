//
// Created by USUARIO on 11/02/2023.
//

#include "Chaqueta.h"

Chaqueta::Chaqueta() : Ropa(), ChaquetaI(), numeroDeBolsillos(0), capucha(true), impermeable(true){}
Chaqueta::Chaqueta(const string &nombre, const string &referencia, const string &color, const string &marca,
                   const string &genero, const string &modelo, const string &material, int precio, int garantia,
                   int stock, float talla, int numeroDeBolsillos, bool capucha, bool impermeable) :
                   Ropa(nombre, referencia, color, marca,genero, modelo, material, precio, garantia, stock, talla),
                   numeroDeBolsillos(numeroDeBolsillos), capucha(capucha), impermeable(impermeable) {}

int Chaqueta::getNumeroDeBolsillos() const {
    return numeroDeBolsillos;
}

void Chaqueta::setNumeroDeBolsillos(int numeroDeBolsillos) {
    Chaqueta::numeroDeBolsillos = numeroDeBolsillos;
}

bool Chaqueta::getCapucha() const {
    return capucha;
}

void Chaqueta::setCapucha(bool capucha) {
    Chaqueta::capucha = capucha;
}

bool Chaqueta::getImpermeable() const {
    return impermeable;
}

void Chaqueta::setImpermeable(bool impermeable) {
    Chaqueta::impermeable = impermeable;
}

string Chaqueta::conCapucha() {
    return (capucha) ? "Si" : "No";
}

string Chaqueta::conImpermeabilidad() {
    return (impermeable) ? "Si" : "No";
}

ostream &operator<<(ostream &out, Chaqueta &c) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << c.tipoCategoria() << endl;
    cout << "Nombre: " << c.getNombre() << endl;
    cout << "Genero: " << c.getGenero() << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Color: " << c.getColor() <<endl;
    cout << "Talla: " << c.getTalla() << endl;
    cout << "Impermeable: " << c.conImpermeabilidad() << endl;
    cout << "Capucha: " << c.conCapucha() << endl;
    cout << "Numero de bolsillos: " << c.getNumeroDeBolsillos() << endl;
    cout << "Precio: " << c.getPrecio() << endl;
    cout << "Stock: " << c.getStock() << endl;
    cout << "Garantia: " << c.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << c.getMaterial() << endl;
    cout << "Referencia: " << c.getReferencia() << endl;
    cout << "Modelo:" << c.getModelo() << endl;
    return out;
}



