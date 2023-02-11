cmake_minimum_required(VERSION 3.24)
project(TiendaDeportiva)

set(CMAKE_CXX_STANDARD 17)

add_executable(TiendaDeportiva main.cpp INTERFACES/Beneficios.h INTERFACES/LiquidacionNomina.h CLASES_ABSTRACTAS/Empleado.cpp CLASES_ABSTRACTAS/Empleado.h CLASES/Tienda.cpp CLASES/Tienda.h CLASES/EmpleadoTiempoCompleto.cpp CLASES/EmpleadoTiempoCompleto.h)
