//
// Created by crism on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_TIENDA_H
#define TIENDADEPORTIVA_TIENDA_H
#include <vector>
#include <iostream>
#include "../CLASES_ABSTRACTAS/Empleado.h"

using namespace std;

class Tienda {
   string nombre;
   string direccion;
   int numeroEmpleados;
   vector<Empleado *> empleados;

public:

    Tienda();
    Tienda(string nombre, string direccion, int numeroEmpleados);
    Tienda(string nombre, string direccion, int numeroEmpleados, vector<Empleado* > empleados);

    string getNombre();

    void setNombre(string nombre);

    string getDireccion();

    void setDireccion(string direccion);

    int getNumeroEmpleados();

    void setNumeroEmpleados(int numeroEmpleados);

    vector<Empleado* > getEmpleados();

    void setEmpleados(vector<Empleado* > lista);

    friend ostream& operator<<(ostream &out, Tienda i);

};


#endif //TIENDADEPORTIVA_TIENDA_H
