//
// Created by VILL on 11/02/2023.
//

#include "CarritoDeCompra.h"



//CONSTRUCTORES CARRITO DE COMPRA

CarritoDeCompra::CarritoDeCompra():numeroDeProductos(0){
    this->productosCarrito = {};
}
CarritoDeCompra::CarritoDeCompra(vector<Producto *> &productosCarrito) : productosCarrito(productosCarrito) {}

//GETTERS Y SETTERS CARRITO DE COMPRA

vector<Producto *> &CarritoDeCompra::getProductosCarrito()  {
    return productosCarrito;
}
void CarritoDeCompra::setProductosCarrito(const vector<Producto *> &productosCarrito) {
    CarritoDeCompra::productosCarrito = productosCarrito;
}

void CarritoDeCompra::setNumeroDeProductos() {
    CarritoDeCompra::numeroDeProductos = productosCarrito.size();
}
int CarritoDeCompra::getNumeroDeProductos(){
    CarritoDeCompra::setNumeroDeProductos();
    return numeroDeProductos;
}




//SOBRECARGA
ostream& operator<<(ostream &out, CarritoDeCompra c){
    if(!c.getProductosCarrito().empty()){
        for(Producto *p: c.getProductosCarrito()){
            cout << p << endl;
        }
    }else{
        cout << "No hay productos para mostrar." << endl;
    }

    cout << "Tienes en el carrito " << c.getNumeroDeProductos() << " productos. \n\n";
    return out;
}

void CarritoDeCompra::operator+(Tienda productosDisponibles){
    int posicion=0;
    bool flag = true;

    while(flag){
        cout << "Por favor digite la posicion del producto que desea anadir al carrito de compras: \n";
        cin >> posicion;

        if(posicion <= productosDisponibles.getCantidadDeProductos()){
            productosCarrito.push_back(productosDisponibles.getListaProductos()[posicion-1]);

            flag = false;
            }
        else{
            cout << "La posicion no es correcta. \n";
        }
    }

}

void CarritoDeCompra::operator -(int posicion){
    if(!productosCarrito.empty()){
    productosCarrito.erase(productosCarrito.begin() + (posicion - 1));
    }
    else{
        cout << "No hay productos que eliminar en el carrito \n";
    }
}


//METODOS PROPIOS

int CarritoDeCompra::menu(){
    int opcMenuCarrito = 0;
    while(opcMenuCarrito != 3){
        cout << "¿Que deseas hacer?  \n";
        cout << "1) Comprar productos del carrito de compras: \n";
        cout << "2) Eliminar producto del carrito de compras: \n";
        cout << "3) Regresar a la tienda: \n";
        cin >> opcMenuCarrito;

        if(opcMenuCarrito == 1){
            cout << "¡Gracias por su compra, vuelva pronto! \n";
            opcMenuCarrito = 3 ;
        }
        else if(opcMenuCarrito == 2){
            return opcMenuCarrito;

            /*int opcEliminarCarrito = 0;
            cout << "Escriba la posicion del producto que desea eliminar \n";
            cin >> opcEliminarCarrito;
            //variableCarrito - opcEliminarCarrito;*/
        }
        else if(opcMenuCarrito == 3){
            cout << "Regresando a la tienda..." ;
        }
        else{
            cout << "Opcion Invalida..";
        }

    }
    return 0;
}




