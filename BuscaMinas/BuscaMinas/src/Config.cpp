#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

// Constructor que inicializa los parámetros del tablero
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero;                // Asigna el número de filas al tablero
    this->columnasTablero = columnasTablero;          // Asigna el número de columnas al tablero
    this->minasTablero = minasTablero;                // Asigna el número de minas al tablero
    this->modoDesarrolladorTablero = modoDesarrolladorTablero; // Establece el modo de desarrollador (true o false)
    this->vidasTablero = vidasTablero;                // Establece el número de vidas del jugador
}

// Función que muestra el menú de configuración y permite modificar valores
void Config::menuConfiguracion()
{
    int opciones;            // Variable para almacenar la opción seleccionada
    int valorIngresado;      // Variable para almacenar el valor que se desea cambiar
    bool repetir = true;     // Variable para controlar el bucle del menú

    do
    {
        system("cls"); // Limpiar la pantalla (función específica de Windows, en sistemas UNIX se puede usar "clear")

        // Mostrar la configuración actual
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------------------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones; // Solicitar al usuario que ingrese una opción

        // Si la opción seleccionada no es 6 (salir), se solicita el nuevo valor
        if (opciones != 6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado; // Solicitar al usuario el valor que quiere ingresar
        }

        // Procesar la opción seleccionada
        switch (opciones)
        {
        case 1:
            // Modificar el número de filas si el valor está entre 3 y 40
            if (valorIngresado >= 3 && valorIngresado <= 40)
            {
                this->setfilasTablero(valorIngresado);  // Actualiza el número de filas
                cout << "Filas del Tablero actualizadas" << endl;
            }
            else
            {
                // Si el valor está fuera de rango, mostrar un error
                cout << "Error: El numero de Filas debe estar entre 3 y 40." << endl;
            }
            break;

        case 2:
            // Modificar el número de columnas
            this->setcolumnasTablero(valorIngresado); 
            cout << "Columnas del Tablero actualizadas" << endl;
            break;

        case 3:
            // Modificar el número de minas
            this->setminasTablero(valorIngresado); 
            cout << "Minas del Tablero actualizadas" << endl;
            break;

        case 4:
            // Modificar el modo de desarrollador
            this->setmodoDesarrolladorTablero(valorIngresado); 
            cout << "Modo del Juego actualizado" << endl;
            break;

        case 5:
            // Modificar el número de vidas
            this->setvidasTablero(valorIngresado); 
            cout << "Vidas del Juego actualizadas" << endl;
            break;

        case 6:
            // Salir del menú de configuración
            repetir = false;
            break;
        }

        system("pause"); // Pausar la ejecución para que el usuario vea los cambios
    } while (repetir); // Continuar mostrando el menú hasta que el usuario seleccione la opción 6
}

// Métodos getter y setter para las variables de la clase

// Devuelve el número de filas
int Config::getfilasTablero()
{
    return this->filasTablero;
}

// Establece el número de filas
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero = filasTablero;
}

// Devuelve el número de columnas
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}

// Establece el número de columnas
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero = columnasTablero;
}

// Devuelve el número de minas
int Config::getminasTablero()
{
    return this->minasTablero;
}

// Establece el número de minas
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero = minasTablero;
}

// Devuelve el valor de modo desarrollador (true/false)
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}

// Establece el valor de modo desarrollador (true/false)
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
}

// Devuelve el número de vidas
int Config::getvidasTablero()
{
    return this->vidasTablero;
}

// Establece el número de vidas
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero = vidasTablero;
}


