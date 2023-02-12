//
// Created by USUARIO on 11/02/2023.
//

#include "Ropa.h"

Ropa::Ropa(const string &nombre, const string &referencia, const string &color, const string &marca,
           const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
           float talla) : Producto(nombre, referencia, color, marca, genero, modelo, material, precio, garantia, stock,
                                   talla) {}

string Ropa::tipoCategoria() {
    return "Ropa";
}



