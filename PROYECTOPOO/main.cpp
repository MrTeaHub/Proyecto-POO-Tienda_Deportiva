#include <iostream>
#include <vector>
#include "CLASES/CarritoDeCompra.h"
#include "clases/Cliente.h"
#include "CLASES/Producto.h"
#include "CLASES/Tienda.h"
#include "clases/Creador.h"
#include "clases/Vendedor.h"
#include "clases/RegistroUsuario.h"




using namespace std;

int main(){

    vector<Producto *>listaProductos={
        new Producto("Balon", 1200),
        new Producto("Tenis", 1200),
        new Producto("Casa", 1200),
        new Producto("Tabla", 1200),
    };
    vector<Usuario *>usuariosPreinscritos={
            new Cliente("maicol@hotmail.com","12","clie"),
            new Creador("crea","12","crea"),
            new Vendedor("jesus@unillanos.edu.co", "12", "vend"),
            new Cliente("maicol@hotmail.com","1231","maicolBeltran"),
    };
    RegistroUsuario usuariosRegistrados;
    Tienda productosTienda;
    CarritoDeCompra carritoProductos;
    Cliente cl;
    Vendedor vd;
    Creador cr;
    productosTienda.setListaProductos(listaProductos);
    usuariosRegistrados.setUsuariosBaseDatos(usuariosPreinscritos);
    bool flagBase = true;
    int opcBase = 0, opcUsuario = 0;


    cout << "TIENDA LAS DELICIAS\n";

    while(flagBase){
        cout << "Que opcion desea realizar \n";
        cout << "1) Registrarse\n";
        cout << "2) Iniciar sesion\n";
        cout << "3) Salir de la tienda \n";
        cin >> opcBase;

        if(opcBase == 1){
            usuariosRegistrados.crearUsuario();
        }
        else if(opcBase == 2){
            opcUsuario = usuariosRegistrados.verificarUsuarioYContrasena();
            //Imprimiendo los productos
            productosTienda.printTienda();
            cout << endl;
            bool flagEliminarCarrito = true;
            if(opcUsuario==1){

                //CLIENTE
                cout << "Bienvenido usuario! \n";
                bool flagCliente = true;
                while (flagCliente) {
                    int opcMenuCliente = cl.menu();

                    //SUBMENU DEL CLIENTE
                    if(opcMenuCliente == 1){    //Imprimir tienda
                        productosTienda.printTienda();
                        cout << endl;
                    }
                    else if(opcMenuCliente == 2) {  //Agregar del carrito
                        productosTienda.printTienda();
                        carritoProductos + productosTienda;
                    }
                    else if (opcMenuCliente == 3) {   //Opciones del carrito
                        cout << carritoProductos;
                        if(carritoProductos.menu()==2){
                            while(flagEliminarCarrito) {
                                int opcEliminarCarrito = 0;
                                cout << "Escriba la posicion del producto que desea eliminar \n";
                                cin >> opcEliminarCarrito;
                                if (opcEliminarCarrito <= carritoProductos.getNumeroDeProductos() &&opcEliminarCarrito > 0) {
                                    carritoProductos - opcEliminarCarrito;
                                    flagEliminarCarrito = false;
                                    cout << "Producto eliminado del carrito de compras con exito\n\n";
                                }
                                else {
                                    cout << "Opcion invalida...\n\n";
                                }
                            }
                        }
                    }
                    else if (opcMenuCliente == 4) {     //Imprimir usuario
                        cout << usuariosRegistrados.getNuevoCliente() << endl;
                    }
                    else if (opcMenuCliente == 5) {     //Cerrar sesion
                        flagCliente = false;
                    } else if (opcMenuCliente == 6) {       //salir
                        flagBase = false;
                        flagCliente = false;
                    }
                }
            }
            else if(opcUsuario==2){
                //VENDEDOR
                cout << "Bienvenido COMERCIANTE! \n";
                bool flagVendedor = true;
                while (flagVendedor) {
                    int opcMenuVendedor = vd.menu();

                    //SUBMENU DEL VENDEDOR
                    if(opcMenuVendedor == 1){    //Imprimir tienda
                        productosTienda.printTienda();
                        cout << endl;
                    }
                    else if(opcMenuVendedor == 2) {  //Agregar del carrito
                        productosTienda.printTienda();
                        carritoProductos + productosTienda;
                    }
                    else if (opcMenuVendedor == 3) { //Opciones del carrito
                        cout << carritoProductos;
                        if(carritoProductos.menu()==2){
                            while(flagEliminarCarrito) {
                                int opcEliminarCarrito = 0;
                                cout << "Escriba la posicion del producto que desea eliminar \n";
                                cin >> opcEliminarCarrito;
                                if (opcEliminarCarrito <= carritoProductos.getNumeroDeProductos() &&opcEliminarCarrito > 0) {
                                    carritoProductos - opcEliminarCarrito;
                                    flagEliminarCarrito = false;}
                                else {
                                    cout << "Opcion invalida";
                                }
                            }
                        }
                    }
                    else if (opcMenuVendedor == 4) {   //Agregar a la tienda


                    }
                    else if (opcMenuVendedor == 5) {        //Imprimir usuario
                        cout << usuariosRegistrados.getNuevoVendedor() << endl;
                    }
                    else if (opcMenuVendedor == 6) {        //Cerrar sesion
                        flagVendedor = false;
                    } else if (opcMenuVendedor == 7) {      //Salir
                        flagBase = false;
                        flagVendedor = false;
                    }
                }
            }
            else if(opcUsuario==3){
                //CREADOR
                cout << "Bienvenido CREADOR! \n";
                bool flagCreador = true;
                while (flagCreador) {
                    int opcMenuCreador = cr.menu();

                    //SUBMENU CREADOR
                    if(opcMenuCreador == 1){    //Imprimir tienda
                        productosTienda.printTienda();
                        cout << endl;
                    }
                    else if(opcMenuCreador == 2) {      //Agregar del carrito
                        productosTienda.printTienda();
                        carritoProductos + productosTienda;
                    }
                    else if (opcMenuCreador == 3) {     //Opciones del carrito
                        cout << carritoProductos;
                        if(carritoProductos.menu()==2){
                            while(flagEliminarCarrito) {
                                int opcEliminarCarrito = 0;
                                cout << "Escriba la posicion del producto que desea eliminar \n";
                                cin >> opcEliminarCarrito;
                                if (opcEliminarCarrito <= carritoProductos.getNumeroDeProductos() && opcEliminarCarrito > 0) {
                                    carritoProductos - opcEliminarCarrito;
                                    flagEliminarCarrito = false;}
                                else {
                                    cout << "Opcion invalida";
                                }
                            }
                        }
                    }
                    else if (opcMenuCreador == 4) {     //Agregar a la tienda
                        cout << usuariosRegistrados.getNuevoCreador() << endl;
                    }
                    else if (opcMenuCreador == 5) {     //Eliminar de la tienda
                        int pos = 0;
                        bool flagEliminarProducto = true;
                        cout << "Ingresa la posicion del producto que deseas eliminar\n";
                        while(flagEliminarProducto) {
                            cin >> pos;
                            if (pos <= productosTienda.getCantidadDeProductos() && pos > 0) {
                                productosTienda -= pos;
                                flagEliminarProducto = false;
                            } else {
                                cout << "La posicion ingresada no es correcta, ingresala nuevamente.\n";
                            }
                        }
                    }
                    else if (opcMenuCreador == 6) {     //Imprimir usuario
                        cout << usuariosRegistrados.getNuevoCreador() << endl;
                    }
                    else if (opcMenuCreador == 7) {     //Cerrar sesion
                        flagCreador = false;
                    }
                    else if(opcMenuCreador == 8){       //Salir
                        flagBase = false;
                        flagCreador = false;
                    }
                }
            }
        }
        else if(opcBase == 3){
            cout << "Gracias por preferir nuestra tienda, vuelva pronto!";
            flagBase = false;
        }
        else{
            cout << "La opcion ingresada no es valida... \n\n";
        }
    }






  return 0;
}