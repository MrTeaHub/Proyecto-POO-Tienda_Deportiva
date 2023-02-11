//
// Created by crism on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_EMPLEADO_H
#define TIENDADEPORTIVA_EMPLEADO_H

#include <iostream>
#include "../INTERFACES/Beneficios.h"
#include "../INTERFACES/LiquidacionNomina.h"

using namespace std;

class Empleado: public Beneficios, public LiquidacionNomina{
private:
    string nombre,documentoIdentidad, cargo, fechaContratacion, telefono;
    int productosVendidos, tipoEmpleado;
public:
    Empleado();
    Empleado(string nombre,string documentoIdentidad, string cargo,
             string fechaContratacion, string telefono, int productosVendidos, int tipoEmpleado);

    string getNombre();

    void setNombre(string nombre);

    string getDocumentoIdentidad();

    void setDocumentoIdentidad(string documentoIdentidad);

    string getCargo();

    void setCargo( string cargo);

    string getFechaContratacion();

    void setFechaContratacion(string fechaContratacion);

    string getTelefono();

    void setTelefono(string telefono);

    int getProductosVendidos();

    void setProductosVendidos(int productosVendidos);

    int getTipoEmpleado();

    void setTipoEmpleado(int tipoEmpleado);

    void calcularNomina()override;

    void calcularBeneficios()override;

    void print(ostream &out);

    friend ostream& operator<<(ostream &out, Empleado &e);
};



#endif //TIENDADEPORTIVA_EMPLEADO_H
