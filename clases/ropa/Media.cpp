//
// Created by USUARIO on 11/02/2023.
//

#include "Media.h"

Media::Media() :Ropa(){}

Media::Media(const string &nombre, const string &referencia, const string &color, const string &marca,
             const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
             float talla, const string &tipoDeLargo) : Ropa(nombre, referencia, color, marca, genero, modelo, material,
                                                            precio, garantia, stock, talla), tipoDeLargo(tipoDeLargo) {}

const string &Media::getTipoDeLargo() const {
    return tipoDeLargo;
}

void Media::setTipoDeLargo(const string &tipoDeLargo) {
    Media::tipoDeLargo = tipoDeLargo;
}

ostream &operator<<(ostream &out, Media &m) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << m.tipoCategoria() << endl;
    cout << "Nombre: " << m.getNombre() << endl;
    cout << "Tipo de largo: " << m.getTipoDeLargo() << endl;
    cout << "Genero: " << m.getGenero() << endl;
    cout << "Marca: " << m.getMarca() << endl;
    cout << "Color: " << m.getColor() <<endl;
    cout << "Talla: " << m.getTalla() << endl;
    cout << "Precio: " << m.getPrecio() << endl;
    cout << "Stock: " << m.getStock() << endl;
    cout << "Garantia: " << m.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << m.getMaterial() << endl;
    cout << "Referencia: " << m.getReferencia() << endl;
    cout << "Modelo:" << m.getModelo() << endl;
    return out;
}



