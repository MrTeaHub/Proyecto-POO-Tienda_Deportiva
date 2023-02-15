//
// Created by USUARIO on 11/02/2023.
//

#include "Guante.h"

Guante::Guante(const string &nombre, const string &referencia, const string &color, const string &marca,
               const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
               float talla) : Accesorio(nombre, referencia, color, marca, genero, modelo, material, precio, garantia,
                                        stock, talla) {}

ostream &operator<<(ostream &out, Guante g) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << g.tipoCategoria() << endl;
    cout << "Nombre: " << g.getNombre() << endl;
    cout << "Genero: " << g.getGenero() << endl;
    cout << "Marca: " << g.getMarca() << endl;
    cout << "Color: " << g.getColor() <<endl;
    cout << "Talla: " << g.getTalla() << endl;
    cout << "Precio: " << g.getPrecio() << endl;
    cout << "Stock: " << g.getStock() << endl;
    cout << "Garantia: " << g.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << g.getMaterial() << endl;
    cout << "Referencia: " << g.getReferencia() << endl;
    cout << "Modelo:" << g.getModelo() << endl;
    return out;
}
