# SIV-Lib 📦 - Sistema de Información de Ventas y Control de Inventario

**SIV-Lib** es un software de escritorio para consola interactiva desarrollado en **C++** bajo un enfoque modular y estructurado. Está diseñado especialmente para microempresas, librerías, almacenes o bibliotecas que requieren una solución ágil, ligera y eficiente para automatizar el control de su inventario físico y gestionar sus transacciones comerciales en tiempo real.

El proyecto destaca por su arquitectura organizada que separa limpiamente la lógica del punto de entrada, las interfaces de menús interactivos y las operaciones aritméticas de manipulación de stocks.

---

## 🚀 Características Principales

### 1. Gestión Integral de Inventario (Productos)
* **Registro de Catálogo:** Permite añadir nuevos productos al sistema mediante atributos estructurados (`Código único`, `Nombre descriptivo`, `Cantidad física` y `Precio unitario`).
* **Control de Stock y Alertas:** Monitoreo constante del inventario disponible con sistemas de alerta automática para productos con existencias críticas (menor a 5 unidades).
* **Actualización de Catálogo:** Módulo para reabastecer stock de productos existentes, modificar precios base o depurar ítems obsoletos de forma segura.

### 2. Módulo de Ventas Inteligente (Transacciones)
* **Generación de Ventas:** Registro inmediato de compras asociando el código del producto. El sistema deduce de forma automática las unidades del stock general y calcula dinámicamente el precio total del comprobante.
* **Trazabilidad Contable:** Panel estructurado para listar y consultar de manera tabulada todas las transacciones realizadas durante el turno (Historial de Ventas).
* **Edición de Ventas con Reversión Bidireccional (Caso 3):** Algoritmo avanzado que permite corregir transacciones existentes. Para garantizar la consistencia, el programa:
  1. Devuelve temporalmente las unidades vendidas originales al stock del producto.
  2. Valida si hay inventario total suficiente frente a la nueva cantidad solicitada.
  3. Aplica los cambios definitivos en el inventario y recalcula automáticamente los totales monetarios del comprobante.

### 3. Interfaz de Usuario Limpia e Intuitiva
* Diseñado completamente en consola utilizando cajas de texto con bordes unicode de doble línea.
* Codificación de caracteres activa con soporte UTF-8 nativo (`SetConsoleOutputCP(CP_UTF8)`), asegurando que los caracteres especiales (tildes, eñes, símbolos monetarios) se rendericen perfectamente en la terminal de Windows.

---

## 🛠️ Arquitectura y Modularidad del Código

El código fuente está estructurado bajo las mejores prácticas académicas de modularidad para evitar duplicación de funciones y asegurar un enlazado de compilación libre de errores:

**main.cpp**: Contiene la función main(). Inicializa los arreglos principales de estructuras (Productos PT[500] y Venta VT[1000]), controla las variables de estado globales y maneja el flujo principal a través de un menú raíz interactivo.

**menu-r.h / menu-r.cpp (Menús Interactivos)**: Controla la capa de presentación del software. Administra el submenú de Ventas (menu), el submenú de Inventarios (menu3) y el submenú de Configuración/Gestión de Productos (menu2), delegando las tareas pesadas a las capas de negocio.

**funciones_r.h / funciones_r.cpp (Ventas y Estructuras Base)**: Define las estructuras fundamentales struct Productos y struct Venta. Implementa venta_nueva(), listar_ventas() y editar_venta() (el algoritmo de edición interactivo con validación de stock inverso).

**funciones_g.h / funciones_g.cpp (Gestión de Productos)**: Contiene la lógica transaccional de productos: registrar_producto(), reabastecer_stock(), modificar_precio() y eliminar_producto().
**funciones_i.h / funciones_i.cpp (Inventario e Informes)**: Contiene funciones puramente de lectura y reporte como mostrar_inventario(), buscar_por_codigo() y reporte_bajo_stock().

---

## ⚙️ Tecnologías Utilizadas

* **Lenguaje:** C++11 / C++14
* **Entorno de Desarrollo (IDE):** Embarcadero Dev-C++ 6.3 o ZinjaI
* **Compilador:** TDM-GCC 9.2.0 (64-bit)
* **API de Consola:** Windows.h (para control de codificación unicode)
