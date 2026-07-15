#ifndef FUN_G_H
#define FUN_G_H

#include <string>
using namespace std;

// Se utiliza el struct Productos que ya está declarado
// en funciones_r.h
#include "funciones_r.h"

// Funciones de Gestión de Productos

void registrar_producto(Productos PT[], int &cantProductos);

void reabastecer_stock(Productos PT[], int cantProductos);

void modificar_precio(Productos PT[], int cantProductos);

void eliminar_producto(Productos PT[], int &cantProductos);

#endif