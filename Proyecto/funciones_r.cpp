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
        cout << " No se han registrado ventas aún." << endl;
    } else {
        for (int i = 0; i < cantVentas; i++) {
            cout << " Venta #" << i + 1 << " | Prod: " << VT[i].codigoProducto << " | Cant: " << VT[i].cantVendida << " | Total: $" << VT[i].precioTotal << endl;
        }
    }
    system("pause");
    system("cls");
}