cmake_minimum_required(VERSION 3.24)
project(TiendaDeportiva)

set(CMAKE_CXX_STANDARD 17)

add_executable(TiendaDeportiva main.cpp interfaces/Beneficios.h interfaces/LiquidacionNomina.h clases_abstractas/Empleado.cpp clases_abstractas/Empleado.h clases/Tienda.cpp clases/Tienda.h clases/EmpleadoTiempoCompleto.h clases/EmpleadoTiempoCompleto.cpp clases/EmpleadoPorHoras.cpp clases/EmpleadoPorHoras.h)
