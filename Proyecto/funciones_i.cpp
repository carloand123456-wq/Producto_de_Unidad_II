#include <iostream>
#include <string>
#include "funciones_i.h" 

using namespace std;

void mostrar_inventario(Productos PT[], int cantProductos) {
    cout << "╔═══════════════════════════════════════════╗" << endl;
    cout << "║             INVENTARIO GENERAL            ║" << endl;
    cout << "╚═══════════════════════════════════════════╝" << endl;
    
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

void buscar_por_codigo(Productos PT[], int cantProductos) {
    string cod;
    bool encontrado = false;

    cout << "╔═══════════════════════════════════════════╗" << endl;
    cout << "║             BUSCAR PRODUCTO               ║" << endl;
    cout << "╚═══════════════════════════════════════════╝" << endl;
    cout << "║ Ingrese Codigo: "; cin >> cod;

    for (int i = 0; i < cantProductos; i++) {
        if (PT[i].codigo == cod) {
            encontrado = true;
            cout << "║" << endl;
            cout << "║ [PRODUCTO ENCONTRADO]" << endl;
            cout << "║ Nombre: " << PT[i].nombre << endl;
            cout << "║ Stock actual: " << PT[i].cantidad << " unidades" << endl;
            cout << "║ Precio unitario: S/." << PT[i].precio << endl;
            cout << "╚═══════════════════════════════════════════" << endl;
            break; 
        }
    }

    if (!encontrado) {
        cout << "║ El producto con codigo [" << cod << "] no existe." << endl;
        cout << "╚═══════════════════════════════════════════" << endl;
    }

    system("pause");
    system("cls");
}

void reporte_bajo_stock(Productos PT[], int cantProductos) {
    cout << "╔═══════════════════════════════════════════╗" << endl;
    cout << "║          PRODUCTOS CON BAJO STOCK         ║" << endl;
    cout << "║          (Menores a 5 unidades)           ║" << endl;
    cout << "╚═══════════════════════════════════════════╝" << endl;

    if (cantProductos == 0) {
        cout << " No hay productos registrados." << endl;
    } else {
        int contadorBajo = 0;
        for (int i = 0; i < cantProductos; i++) {
            if (PT[i].cantidad < 5) {
                cout << " Cod: " << PT[i].codigo 
                     << " | " << PT[i].nombre 
                     << " | Stock Critico: " << PT[i].cantidad << " und." << endl;
                cout << "--------------------------------------------------------" << endl;
                contadorBajo++;
            }
        }

        if (contadorBajo == 0) {
            cout << " ¡Todo en orden! Todos los productos tienen stock suficiente (>= 5)." << endl;
        } else {
            cout << " Se encontraron " << contadorBajo << " productos que necesitan reabastecerse." << endl;
        }
    }

    system("pause");
    system("cls");
}