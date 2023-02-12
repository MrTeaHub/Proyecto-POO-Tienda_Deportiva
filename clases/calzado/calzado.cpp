//
// Created by USUARIO on 11/02/2023.
//

#include "calzado.h"

Calzado::Calzado(const string &nombre, const string &referencia, const string &color, const string &marca,
                 const string &genero, const string &modelo, const string &material, int precio, int garantia,
                 int stock, float talla, const string &tipoSuela, const string &tipoDeporte, bool conCordones)
        : Producto(nombre, referencia, color, marca, genero, modelo, material, precio, garantia, stock, talla),
          tipoSuela(tipoSuela), tipoDeporte(tipoDeporte), conCordones(conCordones) {}

const string &Calzado::getTipoSuela() const {
    return tipoSuela;
}

void Calzado::setTipoSuela(const string &tipoSuela) {
    Calzado::tipoSuela = tipoSuela;
}

const string &Calzado::getTipoDeporte() const {
    return tipoDeporte;
}

void Calzado::setTipoDeporte(const string &tipoDeporte) {
    Calzado::tipoDeporte = tipoDeporte;
}

bool Calzado::getConCordones() const {
    return conCordones;
}

void Calzado::setConCordones(bool conCordones) {
    Calzado::conCordones = conCordones;
}

string Calzado::tipoCategoria() {
    return "Calzado";
}

string Calzado::cordones() {
    return (conCordones == 0) ? "No" : "Si";
}

ostream &operator<<(ostream &out, Calzado &c) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << c.tipoCategoria() << endl;
    cout << "Nombre: " << c.getNombre() << endl;
    cout << "Genero: " << c.getGenero() << endl;
    cout << "Tipo de deporte: " << c.getTipoDeporte() << endl;
    cout << "Tipo de suela: " << c.getTipoSuela() << endl;
    cout << "Cordones: " << c.cordones() << endl;
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




