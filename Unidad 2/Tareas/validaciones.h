#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
using namespace std;

bool validarPositivo(int num) {
    return num > 0;
}

bool validarRango(int num, int min, int max) {
    return (num >= min && num <= max);
}
bool validarInicioMenorFin(int inicio, int fin) {
    return inicio < fin;
}
bool validarOpcionMenu(int opcion) {
    return validarRango(opcion, 1, 4);
}
bool validarOpcionSubmenu(int opcion, int maxOpcion) {
    return validarRango(opcion, 1, maxOpcion);
}
int leerEntero(const char* mensaje) {
    int num;
    cout << mensaje;
    cin >> num;
    return num;
}
int leerEnteroPositivo(const char* mensaje) {
    int num;
    do {
        num = leerEntero(mensaje);
        if (!validarPositivo(num)) {
            cout << "Error: El numero debe ser positivo (mayor a 0).\n";
        }
    } while (!validarPositivo(num));
    return num;
}
void leerDosNumerosOrdenados(int &inicio, int &fin, const char* msg1, const char* msg2) {
    do {
        inicio = leerEnteroPositivo(msg1);
        fin = leerEnteroPositivo(msg2);

        if (!validarInicioMenorFin(inicio, fin)) {
            cout << "Error: El segundo numero debe ser mayor que el primero.\n";
        }
    } while (!validarInicioMenorFin(inicio, fin));
}

#endif
