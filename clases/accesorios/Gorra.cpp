//
// Created by USUARIO on 11/02/2023.
//

#include "Gorra.h"

bool Gorra::getCierreAjustable() const {
    return cierreAjustable;
}

void Gorra::setCierreAjustable(bool cierreAjustable) {
    Gorra::cierreAjustable = cierreAjustable;
}

string Gorra::conCierreAjustable() {
    return (cierreAjustable == 0) ?  "No" :  "Si";
}

ostream &operator<<(ostream &out, Gorra &g) {
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
    cout << "Cierre ajustable: " << g.conCierreAjustable() << endl;
    return out;
}



