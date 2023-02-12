//
// Created by USUARIO on 11/02/2023.
//

#include "Medalla.h"


float Medalla::getDiametro() const {
    return diametro;
}

void Medalla::setDiametro(float diametro) {
    Medalla::diametro = diametro;
}

ostream &operator<<(ostream &out, Medalla &m) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << m.tipoCategoria() << endl;
    cout << "Nombre: " << m.getNombre() << endl;
    cout << "Genero: " << m.getGenero() << endl;
    cout << "Marca: " << m.getMarca() << endl;
    cout << "Color: " << m.getColor() <<endl;
    cout << "Talla: " << m.getTalla() << endl;
    cout << "Precio: " << m.getPrecio() << endl;
    cout << "Stock: " << m.getStock() << endl;
    cout << "Garantia: " << m.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << m.getMaterial() << endl;
    cout << "Peso: " << m.getPeso() << endl;
    cout << "Diametro: " << m.getDiametro() << endl;
    cout << "Referencia: " << m.getReferencia() << endl;
    cout << "Modelo:" << m.getModelo() << endl;
    return out;
}
