//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_EMPLEADOTIEMPOCOMPLETO_H
#define TIENDADEPORTIVA_EMPLEADOTIEMPOCOMPLETO_H

#include "../clases_abstractas/Empleado.h"
#include "Tienda.h"


class EmpleadoTiempoCompleto: public Empleado{
private:
    int salario;
public:
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(string nombre, string documentoIdentidad, string cargo, string fechaContratacion, string Telefono, int productosVendidos, int tipoEmpleado, int salario);

    int getSalario();

    void setSalario(int salario);

    float calcularBeneficios()override;

    float calcularNomina()override;

    friend ostream& operator<<(ostream &out, EmpleadoTiempoCompleto ET);
};


#endif //TIENDADEPORTIVA_EMPLEADOTIEMPOCOMPLETO_H
