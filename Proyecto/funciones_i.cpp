#include <iostream>
#include <string>
#include "funciones_i.h" 

using namespace std;

void mostrar_inventario(Productos PT[], int cantProductos) {
    cout << "+-------------------------------------------+" << endl;
    cout << "¦             INVENTARIO GENERAL            ¦" << endl;
    cout << "+-------------------------------------------+" << endl;
    
    if (cantProductos == 0) {
        cout << " No hay productos registrados en el inventario." << endl;
    } else {
        for (int i = 0; i < cantProductos; i++) {
            cout << " Cod: " << PT[i].codigo 
                 << " | Nombre: " << PT[i].nombre 
                 << " | Stock: " << PT[i].cantidad 
                 << " | Precio: S/." << PT[i].precio << endl;
            cout << "--------------------------------------------------------" << endl;
        }
    }
    system("pause");
    system("cls");
}
