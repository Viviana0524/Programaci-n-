#include <iostream>
#include "validaciones.h"
#include "funciones.h"
#include "recursividad.h"
using namespace std;

void mostrarSubmenuPrincipal() {
    cout << "MENU PRINCIPAL\n";
    cout << "1. Funciones sin retorno\n";
    cout << "2. Funciones con retorno\n";
    cout << "3. Recursividad\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
}

void mostrarSubmenuSinRetorno() {
    cout << "FUNCIONES SIN RETORNO\n";
    cout << "1. Mostrar numeros pares (For)\n";
    cout << "2. Do-while\n";
    cout << "3. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
}

void mostrarSubmenuConRetorno() {
    cout << "\nFUNCIONES CON RETORNO\n";
    cout << "1. Cantidad de numeros primos y no primos ingresado \n";
    cout << "2. Calificaciones \n";
    cout << "3. Cantidad de vocales ingresadas \n";
    cout << "4. Diferencia absoluta \n";
    cout << "5. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
}

void mostrarSubmenuRecursividad() {
    cout << "\n--- RECURSIVIDAD ---\n";
    cout << "1. Suma recursiva (1 a n)\n";
    cout << "2. Factorial recursivo\n";
    cout << "3. Cálculo recursivo del (MCD)\n";
    cout << "4. Numeros ascendentes\n";
    cout << "5. Fibonacci recursivo\n";
    cout << "6. Ackerman recursivo\n";
    cout << "7. McCarthy 91 recursivo\n";
    cout << "8. Pares/Impares (recursion indirecta)\n";
    cout << "9. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
}


//FUNCIONES SIN RETORNO

void menuFuncionesSinRetorno() {
    int opcion;
    int inicio, fin, n, m;

    do {
        mostrarSubmenuSinRetorno();
        cin >> opcion;

        if (!validarOpcionSubmenu(opcion, 3)) {
            cout << "Opcion invalida. Intente nuevamente.\n";
            continue;
        }

        switch(opcion) {
            case 1:
                cout << "\n EJERCICIO 1: NUMEROS PARES \n";
                leerDosNumerosOrdenados(inicio, fin,
                    "Ingrese el numero inicial (debe ser > 0): ",
                    "Ingrese el numero final (debe ser > inicial): ");
                mostrarPares(inicio, fin);
                break;

            case 2:
                cout << "\nEJERCICIO 2:  Do-while  \n";
                do {
                    n = leerEnteroPositivo("Ingrese el valor inicial n (debe ser > 0): ");
                    m = leerEnteroPositivo("Ingrese el valor final m (debe ser > 0): ");

                    if (n <= m) {
                        cout << "Error: n debe ser mayor que m para descender.\n";
                    }
                } while (n <= m);
                imprimirDescendente(n, m);
                break;

            case 3:
                cout << "Volviendo al menu principal...\n";
                break;

        }
    } while (opcion != 3);
}


// FUNCIONES CON RETORNO Y RECURSIVIDAD


void menuFuncionesConRetorno() {
    int opcion;

    do {
        mostrarSubmenuConRetorno();
        cin >> opcion;

        if (!validarOpcionSubmenu(opcion, 5)) {
            cout << "Opcion invalida. Intente nuevamente.\n";
            continue;
        }

        switch(opcion) {

            case 1:
                cout << "\n EJERCICIO 3:Cantidad de numeros primos y no primos ingresado \n";
                contarPrimosYSumarNoPrimos();
                break;

            case 2: {
                cout << "\nEJERCICIO 4: Promedio de calificaciones \n";

                int n = leerEnteroPositivo("¿Cuántas calificaciones desea ingresar?: ");

                double suma = 0;
                double nota;

                for (int i = 0; i < n; i++) {

                    do {
                        cout << "Calificación (1-10): ";
                        cin >> nota;

                        if (!validarRango(nota, 1, 10))
                            cout << "La nota debe estar entre 1 y 10.\n";

                    } while (!validarRango(nota, 1, 10));

                    suma += nota;
                }

                double promedio = promediar_nota(n, suma);
                cout << "Promedio = " << promedio << endl;
                }
                break;

            case 3: {
                cout << "\nEJERCICIO 5: Cantidad de vocales ingresadas \n";

                int n = leerEnteroPositivo("¿Cuántos caracteres va a ingresar?: ");

                char letras[n];

                cout << "Ingrese los caracteres (termina en '#'):\n";
                for (int i = 0; i < n; i++) {
                    cin >> letras[i];
                    if (letras[i] == '#') break;
                }

                int cantVocales = contarVocales(n, letras);

                cout << "Cantidad de vocales = " << cantVocales << endl;
                }
                break;

            case 4: {
                cout << "\nEJERCICIO 6: Diferencia absoluta entre suma de dígitos pares e impares\n";

                int numero = leerEnteroPositivo("Ingrese un número entero positivo: ");

                int resultado = diferenciaParesImpares(numero);

                cout << "Diferencia absoluta = " << resultado << endl;
                }
                break;

            case 5:
                cout << "Volviendo al menu principal...\n";
                break;
        }

    } while (opcion != 5);
}


void menuRecursividad() {
    int opcion;

    do {
        mostrarSubmenuRecursividad();
        cin >> opcion;

        if (!validarOpcionSubmenu(opcion, 9)) {
            cout << "Opción inválida. Intente nuevamente.\n";
            continue;
        }

        switch(opcion) {

            case 1: {
                cout << "\nEJERCICIO 1: Suma recursiva (1 a n)\n";
                int n = leerEnteroPositivo("Ingrese un número positivo: ");
                cout << "Resultado = " << sumaRecursiva(n) << endl;
                break;
            }

            case 2: {
                cout << "\nEJERCICIO 2: Factorial recursivo\n";
                int n = leerEnteroPositivo("Ingrese un número positivo: ");
                cout << "Factorial = " << factorial(n) << endl;
                break;
            }

            case 3: {
                cout << "\nEJERCICIO 3: Cálculo recursivo del MCD\n";
                int a = leerEnteroPositivo("Ingrese el primer número: ");
                int b = leerEnteroPositivo("Ingrese el segundo número: ");
                cout << "MCD = " << mcd(a, b) << endl;
                break;
            }

            case 4: {
                cout << "\nEJERCICIO 4: Números ascendentes\n";
                int n = leerEnteroPositivo("Ingrese un número positivo: ");
                cout << "Secuencia ascendente: ";
                imprimirAscendente(n);
                cout << endl;
                break;
            }

            case 5: {
                cout << "\nEJERCICIO 5: Fibonacci recursivo\n";
                int n = leerEnteroPositivo("Ingrese un número positivo: ");
                cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
                break;
            }

            case 6: {
                cout << "\nEJERCICIO 6: Función de Ackermann\n";
                int m = leerEnteroPositivo("Ingrese m (0-3 recomendado): ");
                int n = leerEnteroPositivo("Ingrese n: ");
                cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
                break;
            }

            case 7: {
                cout << "\nEJERCICIO 7: McCarthy 91\n";
                int n = leerEnteroPositivo("Ingrese un número: ");
                cout << "Resultado = " << mcCarthy91(n) << endl;
                break;
            }

            case 8: {
                cout << "\nEJERCICIO 8: Pares / impares (recursión indirecta)\n";
                int n = leerEnteroPositivo("Ingrese un número positivo: ");

                if (esPar(n))
                    cout << n << " es PAR.\n";
                else
                    cout << n << " es IMPAR.\n";

                break;
            }

            case 9:
                cout << "Volviendo al menú principal...\n";
                break;
        }

    } while (opcion != 9);
}


// FUNCIÓN PRINCIPAL


int main() {
    int opcion;

    cout << "  TAREA 2.3: FUNCIONES Y RECURSIVIDAD\n";

    do {
        mostrarSubmenuPrincipal();
        cin >> opcion;

        if (!validarOpcionMenu(opcion)) {
            cout << "Opcion invalida. Seleccione del 1 al 4.\n";
            continue;
        }

        switch(opcion) {
            case 1:
                menuFuncionesSinRetorno();
                break;

            case 2:
                menuFuncionesConRetorno();
                break;

            case 3:
                menuRecursividad();
                break;

            case 4:
                cout << "  Fin del pograma.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
