//
// Created by USUARIO on 11/02/2023.
//

#include "Tennis.h"

Tennis::Tennis(const string &nombre, const string &referencia, const string &color, const string &marca,
               const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
               float talla, const string &tipoSuela, const string &tipoDeporte, bool conCordones,
               const string &tipoDeSuperficie) : Calzado(nombre, referencia, color, marca, genero, modelo, material,
                                                         precio, garantia, stock, talla, tipoSuela, tipoDeporte,
                                                         conCordones), tipoDeSuperficie(tipoDeSuperficie) {}

const string &Tennis::getTipoDeSuperficie() const {
    return tipoDeSuperficie;
}

void Tennis::setTipoDeSuperficie(const string &tipoDeSuperficie) {
    Tennis::tipoDeSuperficie = tipoDeSuperficie;
}

ostream &operator<<(ostream &out, Tennis &t) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << t.tipoCategoria() << endl;
    cout << "Nombre: " << t.getNombre() << endl;
    cout << "Genero: " << t.getGenero() << endl;
    cout << "Tipo de deporte: " << t.getTipoDeporte() << endl;
    cout << "Tipo de suela: " << t.getTipoSuela() << endl;
    cout << "Tipo de superficie: " << t.getTipoDeSuperficie() << endl;
    cout << "Marca: " << t.getMarca() << endl;
    cout << "Color: " << t.getColor() <<endl;
    cout << "Talla: " << t.getTalla() << endl;
    cout << "Precio: " << t.getPrecio() << endl;
    cout << "Stock: " << t.getStock() << endl;
    cout << "Garantia: " << t.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << t.getMaterial() << endl;
    cout << "Referencia: " << t.getReferencia() << endl;
    cout << "Modelo:" << t.getModelo() << endl;
    return out;
}
