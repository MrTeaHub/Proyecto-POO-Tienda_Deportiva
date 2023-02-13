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
            new Cliente("maicol@hotmail.com","1231","das"),
            new Creador("villegas@gmail.com","1212","VillegasPRO"),
            new Vendedor("jesus@unillanos.edu.co", "4111", "jes"),
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
            int i=1;
            cout << "Lista de Productos: \n" ;
            for(Producto* pro : productosTienda.getListaProductos()){
                cout << i << ") " << pro << endl;
                i++;
            }
            cout << endl;

            if(opcUsuario==1){
                //CLIENTE
                cout << "Bienvenido usuario! \n";
                bool flagCliente = true;
                while (flagCliente) {
                    int opcMenuCliente = cl.menu();

                    if (opcMenuCliente == 1) {
                        carritoProductos + productosTienda;
                    } else if (opcMenuCliente == 2) {
                        cout << carritoProductos;
                    } else if (opcMenuCliente == 3) {}
                    else if (opcMenuCliente == 4) {
                        flagCliente = false;
                    } else if (opcMenuCliente == 5) {
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

                    if (opcMenuVendedor == 1) {
                        carritoProductos + productosTienda;
                    } else if (opcMenuVendedor == 2) {
                        cout << carritoProductos;
                    } else if (opcMenuVendedor == 3) {
                    } else if (opcMenuVendedor == 4) {}
                    else if (opcMenuVendedor == 5) {
                        flagVendedor = false;
                    } else if (opcMenuVendedor == 6) {
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

                    if (opcMenuCreador == 1) {
                        carritoProductos + productosTienda;
                    } else if (opcMenuCreador == 2) {
                        cout << carritoProductos;
                    } else if (opcMenuCreador == 3) {
                    } else if (opcMenuCreador == 4) {
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
                    else if (opcMenuCreador == 5) {
                    } else if (opcMenuCreador == 6) {
                        flagCreador = false;
                    } else if(opcMenuCreador == 7){
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