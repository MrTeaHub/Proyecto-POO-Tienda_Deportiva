//
// Created by crism on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_TIENDA_H
#define TIENDADEPORTIVA_TIENDA_H
#include <vector>
#include <iostream>
#include "../clases_abstractas/Empleado.h"
#include "Producto.h"

using namespace std;

class Tienda {
    vector<Producto *>listaProductos;
    int cantidadDeProductos;
   string nombre;
   string direccion;
   int numeroEmpleados;
   vector<Empleado *> empleados;

public:

    Tienda();
    Tienda(string nombre, string direccion, int numeroEmpleados);
    Tienda(string nombre, string direccion, int numeroEmpleados, vector<Empleado* > empleados);
    Tienda(vector<Producto *>listaProductos);   //AGREGACION

    string getNombreT();
    void setNombre(string nombre);
    string getDireccion();
    void setDireccion(string direccion);
    int getNumeroEmpleados();
    void setNumeroEmpleados(int numeroEmpleados);
    vector<Empleado* > getEmpleados();
    void setEmpleados(vector<Empleado* > lista);


    friend ostream& operator<<(ostream &out, Tienda i);

    int getCantidadDeProductos();

    void operator +=(Producto *p);

    void operator -=(int z);

    void printTienda();

    vector<Producto *> &getListaProductos();

    void setListaProductos(vector<Producto *> listaProductos);

    void setCantidadDeProductos();
};


#endif //TIENDADEPORTIVA_TIENDA_H
