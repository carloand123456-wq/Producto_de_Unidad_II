#include <iostream>
#include <windows.h>
#include "menu-r.h"
using namespace std;
int main(){
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
				menu();
				break;
				
			case 2:
				menu2();
				break;
				
			case 3:
				menu3();
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