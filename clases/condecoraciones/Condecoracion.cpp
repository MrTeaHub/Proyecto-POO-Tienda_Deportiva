//
// Created by USUARIO on 11/02/2023.
//

#include "Condecoracion.h"

Condecoracion::Condecoracion(const string &nombre, const string &referencia, const string &color, const string &marca,
                             const string &genero, const string &modelo, const string &material, int precio,
                             int garantia, int stock, float talla, float peso) : Producto(nombre, referencia, color,
                                                                                          marca, genero, modelo,
                                                                                          material, precio, garantia,
                                                                                          stock, talla), peso(peso) {}

float Condecoracion::getPeso() const {
    return peso;
}

void Condecoracion::setPeso(float peso) {
    Condecoracion::peso = peso;
}

string Condecoracion::tipoCategoria() {
    return "Condecoracion";
}

ostream &operator<<(ostream &out, Condecoracion &c) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << c.tipoCategoria() << endl;
    cout << "Nombre: " << c.getNombre() << endl;
    cout << "Genero: " << c.getGenero() << endl;
    cout << "Marca: " << c.getMarca() << endl;
    cout << "Color: " << c.getColor() <<endl;
    cout << "Talla: " << c.getTalla() << endl;
    cout << "Precio: " << c.getPrecio() << endl;
    cout << "Stock: " << c.getStock() << endl;
    cout << "Garantia: " << c.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << c.getMaterial() << endl;
    cout << "Peso: " << c.getPeso() << endl;
    cout << "Referencia: " << c.getReferencia() << endl;
    cout << "Modelo:" << c.getModelo() << endl;
    return out;
}


