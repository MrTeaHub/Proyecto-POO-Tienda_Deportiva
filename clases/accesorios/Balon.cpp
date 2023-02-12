//
// Created by USUARIO on 11/02/2023.
//

#include "Balon.h"

Balon::Balon(const string &nombre, const string &referencia, const string &color, const string &marca,
             const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
             float talla, float diametro) : Accesorio(nombre, referencia, color, marca, genero, modelo, material,
                                                      precio, garantia, stock, talla), diametro(diametro) {}

float Balon::getDiametro() const {
    return diametro;
}

void Balon::setDiametro(float diametro) {
    Balon::diametro = diametro;
}

ostream &operator<<(ostream &out, Balon &b) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << b.tipoCategoria() << endl;
    cout << "Nombre: " << b.getNombre() << endl;
    cout << "Genero: " << b.getGenero() << endl;
    cout << "Marca: " << b.getMarca() << endl;
    cout << "Color: " << b.getColor() <<endl;
    cout << "Talla: " << b.getTalla() << endl;
    cout << "Precio: " << b.getPrecio() << endl;
    cout << "Stock: " << b.getStock() << endl;
    cout << "Garantia: " << b.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << b.getMaterial() << endl;
    cout << "Referencia: " << b.getReferencia() << endl;
    cout << "Modelo:" << b.getModelo() << endl;
    cout << "Diametro: " << b.getDiametro() << endl;
    return out;
}
