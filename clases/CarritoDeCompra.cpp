//
// Created by USUARIO on 14/02/2023.
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

//CALCULAR PRECIO TOTAL
void CarritoDeCompra::calcularPrecioTotal() {
    int montoAPagar = 0;
    for(Producto* pro : productosCarrito){
        montoAPagar = pro->getPrecio() + montoAPagar;
    }
    productosCarrito.clear();
    cout << "El monto a pagar es de: " << montoAPagar << endl;
}



//SOBRECARGA
ostream& operator<<(ostream &out, CarritoDeCompra c){
    if(!c.getProductosCarrito().empty()){
        int i = 1;
        for(Producto *p: c.getProductosCarrito()){
            cout << i << ") " << p->getNombre() << endl;
            i++;
        }
    }else{
        cout << "No hay productos para mostrar." << endl;
    }

    cout << "\nTienes en el carrito " << c.getNumeroDeProductos() << " productos. \n\n";
    return out;
}

void CarritoDeCompra::operator+(Tienda productosDisponibles){
    int posicion=0;
    bool flag = true;

    while(flag){
        cout << "Por favor digite la posicion del producto que desea anadir al carrito de compras: \n";
        cin >> posicion;

        if(posicion <= productosDisponibles.getCantidadDeProductos() && posicion > 0){
            productosCarrito.push_back(productosDisponibles.getListaProductos()[posicion-1]);

            cout << "Producto agregado con exito!\n\n";

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
        cout << "Que deseas hacer?  \n";
        cout << "1) Comprar productos del carrito de compras: \n";
        cout << "2) Eliminar producto del carrito de compras: \n";
        cout << "3) Regresar a la tienda: \n";
        cin >> opcMenuCarrito;

        if(opcMenuCarrito == 1){
            calcularPrecioTotal();
            cout << "¡Gracias por su compra, vuelva pronto! \n";
            opcMenuCarrito = 3 ;
        }
        else if(opcMenuCarrito == 2){
            return opcMenuCarrito;
        }
        else if(opcMenuCarrito == 3){
            cout << "Regresando a la tienda...\n\n" ;
        }
        else{
            cout << "Opcion Invalida... \n\n";
        }

    }
    return 0;
}

