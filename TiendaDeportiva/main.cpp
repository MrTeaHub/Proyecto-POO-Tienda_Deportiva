#include <iostream>
#include <vector>
#include "CLASES_ABSTRACTAS/Empleado.h"
#include "CLASES/Tienda.h"

int main() {
    vector<Empleado *> Lista_Empleados = {};
    Lista_Empleados.push_back(new Empleado("CARLOS","12121231","Jefe","00/00/0000","31327121",2,0));
    Lista_Empleados.push_back(new Empleado("MARIA","122123231","ADMINISTRACION","00/00/0000","313486721",5,0));

    Tienda t1("la de la esquida","xxxxx", 1);
    t1.setEmpleados(Lista_Empleados);

    cout << t1;

    return 0;
}
