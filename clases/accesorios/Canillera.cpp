//
// Created by USUARIO on 11/02/2023.
//

#include "Canillera.h"

Canillera::Canillera(const string &nombre, const string &referencia, const string &color, const string &marca,
                     const string &genero, const string &modelo, const string &material, int precio, int garantia,
                     int stock, float talla) : Accesorio(nombre, referencia, color, marca, genero, modelo, material,
                                                         precio, garantia, stock, talla) {}

ostream &operator<<(ostream &out, Canillera &a) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << a.tipoCategoria() << endl;
    cout << "Nombre: " << a.getNombre() << endl;
    cout << "Genero: " << a.getGenero() << endl;
    cout << "Marca: " << a.getMarca() << endl;
    cout << "Color: " << a.getColor() <<endl;
    cout << "Talla: " << a.getTalla() << endl;
    cout << "Precio: " << a.getPrecio() << endl;
    cout << "Stock: " << a.getStock() << endl;
    cout << "Garantia: " << a.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << a.getMaterial() << endl;
    cout << "Referencia: " << a.getReferencia() << endl;
    cout << "Modelo:" << a.getModelo() << endl;
    return out;
}
