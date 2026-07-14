#include <iostream>
#include <windows.h>
#include "menu-r.h"
using namespace std;

void menu(){
	SetConsoleOutputCP(CP_UTF8);
	int op2;
	do{
		cout<<"╔═══════════════════════════════════════════╗"<<endl;
		cout<<"║             REGISTRO DE VENTAS            ║"<<endl;
		cout<<"╠═══════════════════════════════════════════╣"<<endl;
		cout<<"║ 1.- Registrar una venta nueva.            ║"<<endl;
		cout<<"║ 2.- Listar las ventas realizadas.         ║"<<endl;
		cout<<"║ 3.- Editar una venta.                     ║"<<endl;
		cout<<"║ 0.- Volver al inicio.                     ║"<<endl;
		cout<<"╚═══════════════════════════════════════════╝"<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op2;
		system("cls");
		
		switch(op2){
			case 1:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 1...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 2...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 3...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 0:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║       Volviendo al menu principal...      ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			default:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║            Opcion invalida...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
		}
		
		
	} while(0 != op2);
}


void menu3(){
	SetConsoleOutputCP(CP_UTF8);
	int op3;
	do{
		cout<<"╔═══════════════════════════════════════════╗"<<endl;
		cout<<"║                INVENTARIO                 ║"<<endl;
		cout<<"╠═══════════════════════════════════════════╣"<<endl;
		cout<<"║ 1.- Mostrar el inventario.                ║"<<endl;
		cout<<"║ 2.- Buscar producto por codigo.           ║"<<endl;
		cout<<"║ 3.- Productos con bajo stock.             ║"<<endl; //menor a 5 unidades
		cout<<"║ 0.- Volver al inicio.                     ║"<<endl;
		cout<<"╚═══════════════════════════════════════════╝"<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op3;
		system("cls");
		
		switch(op3){
			case 1:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 1...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 2...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 3...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 0:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║       Volviendo al menu principal...      ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			default:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║            Opcion invalida...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
		}
		
		
	} while(0 != op3);
}


void menu2(){
	SetConsoleOutputCP(CP_UTF8);
	int op4;
	do{
		cout<<"╔═══════════════════════════════════════════╗"<<endl;
		cout<<"║           GESTION DE PRODUCTOS            ║"<<endl;
		cout<<"╠═══════════════════════════════════════════╣"<<endl;
		cout<<"║ 1.- Registrar un nuevo producto.          ║"<<endl;
		cout<<"║ 2.- Reabastecer stock.                    ║"<<endl;
		cout<<"║ 3.- Modificar precio.                     ║"<<endl;
		cout<<"║ 4.- Eliminar un producto.                 ║"<<endl;
		cout<<"║ 0.- Volver al inicio.                     ║"<<endl;
		cout<<"╚═══════════════════════════════════════════╝"<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op4;
		system("cls");
		
		switch(op4){
			case 1:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 1...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 2...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 3...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso 4...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 0:
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║       Volviendo al menu principal...      ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			default:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║            Opcion invalida...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
		}
		
		
	} while(0 != op4);
}