//
// Created by USUARIO on 11/02/2023.
//

#include "Licra.h"

Licra::Licra() : Ropa(), secadoRapido(true), proteccionUV(true){}
Licra::Licra(const string &nombre, const string &referencia, const string &color, const string &marca,
             const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
             float talla, bool secadoRapido, bool proteccionUv) : Ropa(nombre, referencia, color, marca, genero, modelo,
                                                                       material, precio, garantia, stock, talla),
                                                                  secadoRapido(secadoRapido),
                                                                  proteccionUV(proteccionUv) {}

bool Licra::isSecadoRapido() const {
    return secadoRapido;
}

void Licra::setSecadoRapido(bool secadoRapido) {
    Licra::secadoRapido = secadoRapido;
}

bool Licra::isProteccionUv() const {
    return proteccionUV;
}

void Licra::setProteccionUv(bool proteccionUv) {
    proteccionUV = proteccionUv;
}

string Licra::conSecadoRapido() {
    return (secadoRapido) ? "Si" : "No";
}

string Licra::conProteccionUV() {
    return (proteccionUV) ? "Si" : "No";
}

ostream &operator<<(ostream &out, Licra &l) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << l.tipoCategoria() << endl;
    cout << "Nombre: " << l.getNombre() << endl;
    cout << "Genero: " << l.getGenero() << endl;
    cout << "Marca: " << l.getMarca() << endl;
    cout << "Color: " << l.getColor() <<endl;
    cout << "Talla: " << l.getTalla() << endl;
    cout << "Secado rapido: " << l.conSecadoRapido() << endl;
    cout << "Proteccion UV: " << l.conProteccionUV() << endl;
    cout << "Precio: " << l.getPrecio() << endl;
    cout << "Stock: " << l.getStock() << endl;
    cout << "Garantia: " << l.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << l.getMaterial() << endl;
    cout << "Referencia: " << l.getReferencia() << endl;
    cout << "Modelo:" << l.getModelo() << endl;
    return out;
}











