//
// Created by crism on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_EMPLEADOTIEMPOCOMPLETO_H
#define TIENDADEPORTIVA_EMPLEADOTIEMPOCOMPLETO_H

#include "../CLASES_ABSTRACTAS/Empleado.h"
#include "../CLASES/Tienda.h"

class EmpleadoTiempoCompleto: public Empleado, public Tienda{
   int salario;
public:
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(string nombre, string documentoIdentidad, string cargo, string fechaContratacion, string Telefono, int productosVendidos, int tipoEmpleado,
                           string Nombre, string direccion, int numeroEmpleados, vector<Empleado *> empleados, int salario);

    int getSalario();

    void setSalario(int salario);

    void calcularBeneficios()override;

    void calcularNomina()override;

    friend ostream& operator<<(ostream &out, EmpleadoTiempoCompleto ET);

};


#endif //TIENDADEPORTIVA_EMPLEADOTIEMPOCOMPLETO_H
