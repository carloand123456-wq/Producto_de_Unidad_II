#include <iostream>
#include <windows.h>
#include "funciones_r.h"
using namespace std;

void venta_nueva(Productos PT[], int &cantProductos, Venta VT[], int &cantVentas){
	SetConsoleOutputCP(CP_UTF8);
	string cod;
	int cant;
	bool encontrado = false;
	
	cout<<"╔═══════════════════════════════════════════╗"<<endl;
	cout<<"║         REGISTRE UNA NUEVA VENTA          ║"<<endl;
	cout<<"╚═══════════════════════════════════════════╝"<<endl;
	cout<<"║ Codigo: "; cin>>cod;
	
	for(int i=0;i<cantProductos;i++){
		if(PT[i].codigo == cod){
			encontrado = true;
			cout<<"║ Producto: "<<PT[i].nombre<<endl;
			cout<<"║ Stock disponible: "<<PT[i].cantidad<<endl;
			cout<<"║ Ingrese la cantidad vendida: "; cin>> cant;
			
			if(cant <= PT[i].cantidad){
				PT[i].cantidad = PT[i].cantidad - cant;
				VT[cantVentas].codigoProducto = cod;
				VT[cantVentas].cantVendida = cant;
				VT[cantVentas].precioTotal = cant * PT[i].precio;
				
				cout<<"║ Total pagado: S/."<<VT[cantVentas].precioTotal<<endl;
				cout<<"║ Venta realizada con exito!"<<endl;
				cout<<"╚════════════════════════════════════════════"<<endl;
				
				cantVentas++;
			}
		}
	}
	
	if(!encontrado){
		cout<<"║ El producto con codigo ["<<cod<<"] no existe."<<endl;
		cout<<"╚════════════════════════════════════════════"<<endl;
	}
	
	system("pause");
	system("cls");
	
}


void listar_ventas(Venta VT[], int cantVentas) {
    cout << "╔═══════════════════════════════════════════╗" << endl;
    cout << "║            LISTADO DE VENTAS              ║" << endl;
    cout << "╚═══════════════════════════════════════════╝" << endl;
    if (cantVentas == 0) {
        cout<<" No se han registrado ventas aún." << endl;
    } else {
        for (int i = 0; i < cantVentas; i++) {
            cout << " Venta #" << i + 1 << " | Prod: " << VT[i].codigoProducto << " | Cant: " << VT[i].cantVendida << " | Total: S/." << VT[i].precioTotal << endl;
        }
    }
    system("pause");
    system("cls");
}

void editar_venta(Productos PT[], int cantProductos, Venta VT[], int cantVentas) {
	SetConsoleOutputCP(CP_UTF8);
	
	if (cantVentas == 0) {
		cout << "╔═══════════════════════════════════════════╗" << endl;
		cout << "║ No se han registrado ventas aún para      ║" << endl;
		cout << "║ poder editarlas.                          ║" << endl;
		cout << "╚═══════════════════════════════════════════╝" << endl;
		system("pause");
		system("cls");
		return;
	}

	int numVenta;
	cout << "╔═══════════════════════════════════════════╗" << endl;
	cout << "║               EDITAR VENTA                ║" << endl;
	cout << "╚═══════════════════════════════════════════╝" << endl;
	cout << "║ Ingrese el número de venta a editar (1 - " << cantVentas << "): "; 
	cin >> numVenta;

	if (numVenta < 1 || numVenta > cantVentas) {
		cout << "║ Error: El número de venta no es válido." << endl;
		system("pause");
		system("cls");
		return;
	}

	int idxVenta = numVenta - 1;
	string codProd = VT[idxVenta].codigoProducto;

	int idxProd = -1;
	for (int i = 0; i < cantProductos; i++) {
		if (PT[i].codigo == codProd) {
			idxProd = i;
			break;
		}
	}

	if (idxProd == -1) {
		cout << "║ Error: El producto con código [" << codProd << "] no existe en el inventario." << endl;
		system("pause");
		system("cls");
		return;
	}

	// Restaurar temporalmente el stock vendido para calcular el stock real total disponible
	PT[idxProd].cantidad += VT[idxVenta].cantVendida;

	cout << "║ Producto: " << PT[idxProd].nombre << endl;
	cout << "║ Stock total disponible para la venta: " << PT[idxProd].cantidad << endl;
	cout << "║ Cantidad vendida actual: " << VT[idxVenta].cantVendida << endl;
	
	int nuevaCant;
	cout << "║ Ingrese la nueva cantidad vendida: "; 
	cin >> nuevaCant;

	if (nuevaCant <= PT[idxProd].cantidad) {
		PT[idxProd].cantidad -= nuevaCant;
		
		VT[idxVenta].cantVendida = nuevaCant;
		VT[idxVenta].precioTotal = nuevaCant * PT[idxProd].precio;

		cout << "║ Nuevo total pagado: S/." << VT[idxVenta].precioTotal << endl;
		cout << "\n ¡Venta editada con éxito!" << endl;
	} else {
		PT[idxProd].cantidad -= VT[idxVenta].cantVendida;
		cout << "║ Error: Stock insuficiente. El stock máximo disponible es " << PT[idxProd].cantidad << "." << endl;
	}

	system("pause");
	system("cls");
}