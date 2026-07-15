#ifndef FUNCIONES_I_H
#define FUNCIONES_I_H

#include <string>
#include "funciones_r.h" 

using namespace std;

// Prototipos de las funciones de inventario 
void mostrar_inventario(Productos PT[], int cantProductos);
void buscar_por_codigo(Productos PT[], int cantProductos);
void reporte_bajo_stock(Productos PT[], int cantProductos);

#endif
