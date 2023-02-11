//
// Created by USUARIO on 11/02/2023.
//

#include "Accesorio.h"

Accesorio::Accesorio(const string &nombre, const string &referencia, const string &color, const string &marca,
                     const string &genero, const string &modelo, const string &material, int precio, int garantia,
                     int stock, float talla) : Producto(nombre, referencia, color, marca, genero, modelo, material,
                                                        precio, garantia, stock, talla) {}

string Accesorio::tipoCategoria() {
    return "Accesorio";
}


