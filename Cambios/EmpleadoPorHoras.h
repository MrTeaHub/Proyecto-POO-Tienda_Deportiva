//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_EMPLEADOPORHORAS_H
#define TIENDADEPORTIVA_EMPLEADOPORHORAS_H

#include "../clases_abstractas/Empleado.h"
#include "Tienda.h"


class EmpleadoPorHoras: public Empleado{
private:
    int valorHora;
    int horasTrabajadas;
public:
    EmpleadoPorHoras();
    EmpleadoPorHoras(string nombre, string documentoIdentidad, string cargo, string fechaContratacion, string Telefono, int productosVendidos,
    int tipoEmpleado, int valorHora, int horasTrabajadas);

    int getValorHora();

    void setValorHora(int valorHora);

    int getHorasTrabajadas();

    void setHorasTrabajadas(int horasTrabajadas);

    float calcularBeneficios()override;

    float calcularNomina()override;

    friend ostream& operator<<(ostream &out, EmpleadoPorHoras EH);
};


#endif //TIENDADEPORTIVA_EMPLEADOPORHORAS_H
