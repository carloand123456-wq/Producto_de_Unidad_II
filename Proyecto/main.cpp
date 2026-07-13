#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int op;
	SetConsoleOutputCP(CP_UTF8);
	do{
		cout<<"╔═════════════════════════════════════════╗"<<endl;
		cout<<"║              MENU PRINCIPAL             ║"<<endl;
		cout<<"╠═════════════════════════════════════════╣"<<endl;
		cout<<"║ 1.- Registro de ventas.                 ║"<<endl;
		cout<<"║ 2.- Solicitar un restock.               ║"<<endl;
		cout<<"║ 3.- Salir del programa.                 ║"<<endl;
		cout<<"╚═════════════════════════════════════════╝"<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op;
		system("cls");
		
		switch(op){
			case 1:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║          Ejecutando caso 1...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║          Ejecutando caso 2...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"╔═════════════════════════════════════════╗"<<endl;
				cout<<"║          Ejecutando caso 3...           ║"<<endl;
				cout<<"╚═════════════════════════════════════════╝"<<endl;
				system("pause");
				system("cls");
				break;
			default:
				system("cls");
				break;
		}
		
		
	} while(op!=3);
	
	
	return 0;
}