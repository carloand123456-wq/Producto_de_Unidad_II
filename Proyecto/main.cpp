#include <iostream>
using namespace std;
int main(){
	int op;
	do{	
		cout<<"============= MENU PRINCIPAL ============="<<endl;	
		cout<<"1.- Registro de ventas."<<endl;
		cout<<"2.- Solicitar un restock."<<endl;
		cout<<"3.- Salir del programa."<<endl;
		cout<<"=========================================="<<endl;
		cout<<"\nEliga una opcion: ";
		cin>>op;
		cout<<""<<endl;
		system("pause");
		system("cls");
		
		switch(op){
			case 1:
				cout<<"Ejecutando caso 1..."<<endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"Ejecutando caso 2..."<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"Ejecutando caso 3..."<<endl;
				system("pause");
				system("cls");
				break;
			default:
				cout<<"Ejecutando caso default..."<<endl;
				system("pause");
				system("cls");
				break;
		}
		
		
	} while(op!=3);
	
	
	return 0;
}