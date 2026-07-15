#include <iostream>
#include <windows.h>
#include "funciones_g.h"

using namespace std;

void registrar_producto(Productos PT[], int &cantProductos){
	SetConsoleOutputCP(CP_UTF8);

	cout<<"╔═══════════════════════════════════════════╗"<<endl;
	cout<<"║         REGISTRAR NUEVO PRODUCTO          ║"<<endl;
	cout<<"╚═══════════════════════════════════════════╝"<<endl;

	cout<<"Codigo: ";
	cin>>PT[cantProductos].codigo;

	cout<<"Nombre: ";
	cin.ignore();
	getline(cin, PT[cantProductos].nombre);

	cout<<"Cantidad: ";
	cin>>PT[cantProductos].cantidad;

	cout<<"Precio: ";
	cin>>PT[cantProductos].precio;

	cantProductos++;

	cout<<"\nProducto registrado correctamente."<<endl;

	system("pause");
	system("cls");
}

void reabastecer_stock(Productos PT[], int cantProductos){
	SetConsoleOutputCP(CP_UTF8);

	string codigo;
	int cantidad;
	bool encontrado = false;

	cout<<"╔═══════════════════════════════════════════╗"<<endl;
	cout<<"║           REABASTECER STOCK               ║"<<endl;
	cout<<"╚═══════════════════════════════════════════╝"<<endl;

	cout<<"Codigo del producto: ";
	cin>>codigo;

	for(int i=0;i<cantProductos;i++){

		if(PT[i].codigo == codigo){

			encontrado = true;

			cout<<"Producto: "<<PT[i].nombre<<endl;
			cout<<"Stock actual: "<<PT[i].cantidad<<endl;

			cout<<"Cantidad a agregar: ";
			cin>>cantidad;

			PT[i].cantidad += cantidad;

			cout<<"Nuevo stock: "<<PT[i].cantidad<<endl;
			break;
		}
	}

	if(!encontrado){
		cout<<"Producto no encontrado."<<endl;
	}

	system("pause");
	system("cls");
}

void modificar_precio(Productos PT[], int cantProductos){
	SetConsoleOutputCP(CP_UTF8);

	string codigo;
	bool encontrado = false;

	cout<<"╔═══════════════════════════════════════════╗"<<endl;
	cout<<"║            MODIFICAR PRECIO               ║"<<endl;
	cout<<"╚═══════════════════════════════════════════╝"<<endl;

	cout<<"Codigo del producto: ";
	cin>>codigo;

	for(int i=0;i<cantProductos;i++){

		if(PT[i].codigo == codigo){

			encontrado = true;

			cout<<"Producto: "<<PT[i].nombre<<endl;
			cout<<"Precio actual: "<<PT[i].precio<<endl;

			cout<<"Nuevo precio: ";
			cin>>PT[i].precio;

			cout<<"Precio actualizado correctamente."<<endl;
			break;
		}
	}

	if(!encontrado){
		cout<<"Producto no encontrado."<<endl;
	}

	system("pause");
	system("cls");
}

void eliminar_producto(Productos PT[], int &cantProductos){
	SetConsoleOutputCP(CP_UTF8);

	string codigo;
	bool encontrado = false;

	cout<<"╔═══════════════════════════════════════════╗"<<endl;
	cout<<"║            ELIMINAR PRODUCTO              ║"<<endl;
	cout<<"╚═══════════════════════════════════════════╝"<<endl;

	cout<<"Codigo del producto: ";
	cin>>codigo;

	for(int i=0;i<cantProductos;i++){

		if(PT[i].codigo == codigo){

			encontrado = true;

			for(int j=i;j<cantProductos-1;j++){
				PT[j] = PT[j+1];
			}

			cantProductos--;

			cout<<"Producto eliminado correctamente."<<endl;
			break;
		}
	}

	if(!encontrado){
		cout<<"Producto no encontrado."<<endl;
	}

	system("pause");
	system("cls");
}