//
// Created by USUARIO on 11/02/2023.
//

#include "Trofeo.h"

Trofeo::Trofeo(const string &nombre, const string &referencia, const string &color, const string &marca,
               const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
               float talla, float peso, float alto, float ancho) : Condecoracion(nombre, referencia, color, marca,
                                                                                 genero, modelo, material, precio,
                                                                                 garantia, stock, talla, peso),
                                                                   alto(alto), ancho(ancho) {}

float Trofeo::getAlto() const {
    return alto;
}

void Trofeo::setAlto(float alto) {
    Trofeo::alto = alto;
}

float Trofeo::getAncho() const {
    return ancho;
}

void Trofeo::setAncho(float ancho) {
    Trofeo::ancho = ancho;
}

ostream &operator<<(ostream &out, Trofeo t) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << t.tipoCategoria() << endl;
    cout << "Nombre: " << t.getNombre() << endl;
    cout << "Genero: " << t.getGenero() << endl;
    cout << "Marca: " << t.getMarca() << endl;
    cout << "Color: " << t.getColor() <<endl;
    cout << "Talla: " << t.getTalla() << endl;
    cout << "Precio: " << t.getPrecio() << endl;
    cout << "Stock: " << t.getStock() << endl;
    cout << "Garantia: " << t.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << t.getMaterial() << endl;
    cout << "Alto: " << t.getAlto() << endl;
    cout << "Ancho: " << t.getAncho() << endl;
    cout << "Peso: " << t.getPeso() << endl;
    cout << "Referencia: " << t.getReferencia() << endl;
    cout << "Modelo:" << t.getModelo() << endl;
    return out;
}
