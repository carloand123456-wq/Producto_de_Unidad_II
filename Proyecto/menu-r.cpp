#include <iostream>
#include <windows.h>
#include "menu-r.h"
using namespace std;

void menu(){
	SetConsoleOutputCP(CP_UTF8);
	char op2;
	do{
		cout<<"╔═══════════════════════════════════════════╗"<<endl;
		cout<<"║          MENU REGISTRO DE VENTAS          ║"<<endl;
		cout<<"╠═══════════════════════════════════════════╣"<<endl;
		cout<<"║ A.- Registrar una venta nueva.            ║"<<endl;
		cout<<"║ B.- Listar las ventas realizadas.         ║"<<endl;
		cout<<"║ C.- Editar una venta.                     ║"<<endl;
		cout<<"║ D.- Calcular el total de ventas.          ║"<<endl;
		cout<<"║ V.- Volver al inicio.                     ║"<<endl;
		cout<<"╚═══════════════════════════════════════════╝"<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op2;
		system("cls");
		
		switch(op2){
			case 'A':
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso A...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 'B':
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso B...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 'C':
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso C...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 'D':
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║            Ejecutando caso D...           ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 'V':
				cout<<"╔═══════════════════════════════════════════╗"<<endl;
				cout<<"║       Volviendo al menu principal...      ║"<<endl;
				cout<<"╚═══════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
		}
		
		
	} while('V' != op2);
}