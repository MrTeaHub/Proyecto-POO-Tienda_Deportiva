#include <iostream>
#include <vector>
#include "clases/CarritoDeCompra.h"
#include "clases/Cliente.h"
#include "clases/Tienda.h"
#include "clases/Creador.h"
#include "clases/Vendedor.h"
#include "clases/RegistroUsuario.h"
#include "clases/PaginaWeb.h"
//productos
//ropa
#include "clases/productos/ropa/Camiseta.h"
#include "clases/productos/ropa/Chaqueta.h"
#include "clases/productos/ropa/Media.h"
#include "clases/productos/ropa/Pantaloneta.h"
#include "clases/productos/ropa/Licra.h"
//accesorios
#include "clases/productos/accesorios/Guante.h"
#include "clases/productos/accesorios/Gorra.h"
#include "clases/productos/accesorios/Balon.h"
#include "clases/productos/accesorios/Canillera.h"
//calzado
#include "clases/productos/calzado/Tennis.h"
//condecoraciones
#include "clases/productos/condecoraciones/Trofeo.h"
#include "clases/productos/condecoraciones/Medalla.h"



using namespace std;

int main(){

    vector<Producto *>listaProductos={
            new Camiseta("Camiseta Deportiva","ASFF12","Azul", "Nike", "Masculino","2023","Algodon",10000,2,345,3.4,"Futbol","Barcelona",true, "Cuello"),
            new Chaqueta("Camiseta Lujosa","ASFF12","Azul", "Nike", "Masculino","2023","Algodon",90000,2,345,3.4,2,true,
                         true),
            new Media("Media elastica","FAFOL","blanco","nike","unisex","2023","Algodon",35000,1,123,3.2,"Alto"),
            new Licra("Licra Pro","LIRCA","negro","Adidas","Masculino","2023","superflex",95000,1,42,3.5,true,true),
            new Pantaloneta("Pantaloneta Mpa","PANTLA", "negro y rojo","Under","femenino","2023","Lana",65000,2,43,2.3,"Baloncesto","Real",true,4),
            new Tennis("Tennis Running","TBNR","Blanco","Puma","masculino", "2023","cuero",350000,2,64,9.6,"Ligera","Running",true,"Cemento"),
            new Balon("Balon del mundial","BLFAN", "Blanco y negro","Adidas","unisex","2022","higthTecnho",499000,2,135,3.4,6.4),
            new Gorra("Gorra natural","GFAAF","cafe","Pupies", "masculino","2023","cuero",390000,1,21,4.6, true),
            new Guante("Guante para pesas","AFGLKA","gris","Shark","unisex","2023","algodon",30000,3,79,2.5),
            new Canillera("Canillera Lebron","CNLEL", "rojo","Lebron","masculino","2023","metal",590000,8,10,7.8),
            new Trofeo("Trofeo Oro","TROTO","amarillo","Petro","unisex","2023","Oro",430000,1,45,7.8,54.7,4.3,6.4),
            new Medalla("Medalla juegos olimpicos", "MEDFAF","oro,plata y bronce","Fifa","unisex","2023","aluminio",40000,2,634,45.5,3.5,4.6)
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
    PaginaWeb pagina(usuariosRegistrados);
    bool flagBase = true;
    int opcBase = 0, opcUsuario = 0;


    cout << "TIENDA LAS DELICIAS\n";
    cout << pagina;

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
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            productosTienda.printTienda();
            cout << endl;
            bool flagEliminarCarrito = true;
            if(opcUsuario==1){

                //CLIENTE
                cout << "Bienvenido usuario! \n";
                bool flagCliente = true;
                while (flagCliente) {
                    cout << endl;
                    int opcMenuCliente = cl.menu();

                    //SUBMENU DEL CLIENTE
                    if(opcMenuCliente == 1){    //Imprimir tienda
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        productosTienda.printTienda();
                        cout << endl;
                    }
                    else if(opcMenuCliente == 2) {  //Agregar del carrito
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        productosTienda.printTienda();
                        cout << "\n\n";
                        carritoProductos + productosTienda;
                    }
                    else if (opcMenuCliente == 3) {   //Opciones del carrito
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
                    cout << endl;
                    int opcMenuVendedor = vd.menu();

                    //SUBMENU DEL VENDEDOR
                    if(opcMenuVendedor == 1){    //Imprimir tienda
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        productosTienda.printTienda();
                        cout << endl;
                    }
                    else if(opcMenuVendedor == 2) {  //Agregar del carrito
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        productosTienda.printTienda();
                        cout << "\n\n";
                        carritoProductos + productosTienda;
                    }
                    else if (opcMenuVendedor == 3) { //Opciones del carrito
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
                                    cout << "Opcion invalida";
                                }
                            }
                        }
                    }
                    else if (opcMenuVendedor == 4) {   //Agregar a la tienda
                        bool flagAgregarProducto = true;
                        int opcProducto=0; //Agregar producto
                        Camiseta* nuevaCamiseta;
                        string nombre, referencia, color, marca, genero, modelo, material, categoria;
                        int precio, garantia, stock;
                        float talla;
                        while (flagAgregarProducto){
                            cout << "Que tipo de producto desea crear? \n" ;
                            cout << "1) Ropa \n";
                            cout << "2) Accesorio \n";
                            cout << "3) Calzado \n";
                            cout << "4) Condecoracion \n";
                            cout << "Por favor digite la opcion\n";
                            cin >> opcProducto;

                            if(opcProducto==1) { //Agregar ropa
                                bool flagRopa = true;
                                while (flagRopa) {
                                    cout << "Que tipo de ropa desea crear? \n";
                                    cout << "1) Camiseta \n";
                                    cout << "2) Chaqueta \n";
                                    cout << "3) Licra \n";
                                    cout << "4) Media \n";
                                    cout << "5) Pantaloneta \n";
                                    cout << "Por favor digite la opcion\n";
                                    cin >> opcProducto;
                                    if (opcProducto == 1) {
                                        string tipoDeCuello, tipoDeporte, nombreEquipo;
                                        cout << "Ingrese el nombre del producto: \n";
                                        cin >> nombre;
                                        cout << "Ingrese la referencia del producto: \n";
                                        cin >> referencia;
                                        cout << "Ingrese el color del producto: \n";
                                        cin >> color;
                                        cout << "Ingrese la marca del producto: \n";
                                        cin >> marca;
                                        cout << "Ingrese el tipo de genero del producto: \n";
                                        cin >> genero;
                                        cout << "Ingrese el modelo del producto: \n";
                                        cin >> modelo;
                                        cout << "Ingrese el material del producto: \n";
                                        cin >> material;
                                        cout << "Ingrese el precio del producto: \n";
                                        cin >> precio;
                                        cout << "Ingrese la garantia del producto: \n";
                                        cin >> garantia;
                                        cout << "Ingrese el stock del producto: \n";
                                        cin >> stock;
                                        cout << "Ingrese la talla del producto: \n";
                                        cin >> talla;
                                        cout << "Ingrese el tipo de deporte: \n";
                                        cin >> tipoDeporte;
                                        cout << "Ingrese el nombre del equipo: \n";
                                        cin >> nombreEquipo;
                                        cout << "Ingrese el tipo de cuello de la camiseta: \n";
                                        cin >> tipoDeCuello;

                                        nuevaCamiseta = new Camiseta(nombre, referencia, color, marca, genero, modelo,
                                                                     material, precio, garantia, stock, talla,
                                                                     tipoDeporte, nombreEquipo, true, tipoDeCuello);
                                        listaProductos.push_back(nuevaCamiseta);
                                        cout << "El producto se ha agregado con exito!" << endl;
                                        flagRopa= false;
                                    }
                                }
                            }
                            else {
                                cout << "Opcion invalida" << endl;
                            }
                            flagAgregarProducto= false;
                        }
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
                    cout << endl;
                    int opcMenuCreador = cr.menu();

                    //SUBMENU CREADOR
                    if(opcMenuCreador == 1){    //Imprimir tienda
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        productosTienda.printTienda();
                        cout << endl;
                    }
                    else if(opcMenuCreador == 2) {      //Agregar del carrito
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        productosTienda.printTienda();
                        cout << "\n\n";
                        carritoProductos + productosTienda;
                    }
                    else if (opcMenuCreador == 3) {     //Opciones del carrito
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        cout << carritoProductos;
                        if(carritoProductos.menu()==2){
                            while(flagEliminarCarrito) {
                                int opcEliminarCarrito = 0;
                                cout << "Escriba la posicion del producto que desea eliminar \n";
                                cin >> opcEliminarCarrito;
                                if (opcEliminarCarrito <= carritoProductos.getNumeroDeProductos() && opcEliminarCarrito > 0) {
                                    carritoProductos - opcEliminarCarrito;
                                    flagEliminarCarrito = false;
                                    cout << "Producto eliminado del carrito de compras con exito\n\n";
                                }
                                else {
                                    cout << "Opcion invalida";
                                }
                            }
                        }
                    }
                    else if (opcMenuCreador == 4){     //Agregar a la tienda
                        cout << usuariosRegistrados.getNuevoCreador() << endl;
                    }
                    else if (opcMenuCreador == 5){     //Eliminar de la tienda
                        int pos = 0;
                        bool flagEliminarProducto = true;
                        productosTienda.printTienda();
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