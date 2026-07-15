#include <iostream>
#include <string>
#include <windows.h>
#include "funciones_r.h"
#include "funciones_i.h"
#include "menu-r.h"
using namespace std;

int main(){
	
	Productos PT[500]; //El arreglo de registros de productos
	int cantProductos = 0; //Controla cuantos productos hay
	Venta VT[1000]; //El arreglo de registros de ventas
	int cantVentas = 0; //Controla cuantas ventas hay
	
	int op;
	bool ejecutando = true;
	SetConsoleOutputCP(CP_UTF8);
	do{
		cout<<"╔═══════════════════════════════════════════╗"<<endl;
		cout<<"║               MENU PRINCIPAL              ║"<<endl;
		cout<<"╠═══════════════════════════════════════════╣"<<endl;
		cout<<"║ 1.- Registro de ventas.                   ║"<<endl;
		cout<<"║ 2.- Gestionar productos.                  ║"<<endl;
		cout<<"║ 3.- Ver el inventario.                    ║"<<endl;
		cout<<"║ 0.- Salir del programa.                   ║"<<endl;
		cout<<"╚═══════════════════════════════════════════╝"<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op;
		system("cls");
		
		switch(op){
			case 1:
				menu(PT, cantProductos, VT, cantVentas);
				break;
				
			case 2:
				menu2(PT, cantProductos);
				break;
				
			case 3:
				menu3(PT, cantProductos);
				break;
				
			case 0: {
				char selec;
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║         Estas seguro de salir?          ║"<<endl;
				cout<<"║       [S] Si       /      [N] No        ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				cout<<"\nEliga una opcion: ";
				cin>>selec;
				system("cls");
		
				switch(selec){
					case 'S':
						cout<<"╔═════════════════════════════════════════╗"<<endl;
						cout<<"║         Saliendo del programa...        ║"<<endl;
						cout<<"╚═════════════════════════════════════════╝"<<endl;
						ejecutando = false;
						system("pause");
						system("cls");
						break;
						
					case 'N':
						cout<<"╔═════════════════════════════════════════╗"<<endl;
						cout<<"║         Volviendo al programa...        ║"<<endl;
						cout<<"╚═════════════════════════════════════════╝"<<endl;
						system("pause");
						system("cls");
						break;
						
					default:
						cout<<"╔═════════════════════════════════════════╗"<<endl;
						cout<<"║             Opcion invalida,            ║"<<endl;
						cout<<"║          volviendo al programa...       ║"<<endl;
						cout<<"╚═════════════════════════════════════════╝"<<endl;
						system("pause");
						system("cls");
						break;
				}
				break;
			}
			
			default:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║            Opcion invalida...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
		}
		
		
	} while(ejecutando);
	
	return 0;
}