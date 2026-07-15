#ifndef FUN_R_H
#define FUN_R_H
#include <string>
using namespace std;

struct Productos{
	string codigo;
	string nombre;
	int cantidad;
	float precio;
};

struct Venta{
	string codigoProducto;
	int cantVendida;
	float precioTotal;
};

void venta_nueva(Productos PT[], int &cantProductos, Venta VT[], int &cantVentas);
void listar_ventas(Venta VT[], int cantVentas);

#endif