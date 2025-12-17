#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
using namespace std;

void mostrarPares(int inicio, int fin) {//Ejercicio 1
    cout << "\nNumeros pares entre " << inicio << " y " << fin << ":\n";
    bool hayPares = false;

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            hayPares = true;
        }
    }

    if (!hayPares) {
        cout << "No hay numeros pares en este rango.";
    }
    cout << "\n";
}

void imprimirDescendente(int n, int m) { //Ejercicio 2
    cout << "\nValores desde " << n << " hasta " << m << " en pasos de -4:\n";

    int valor = n;
    do {
        if (valor >= m) {
            cout << valor << " ";
        }
        valor -= 4;
    } while (valor >= m);

    cout << "\n";
}


void contarPrimosYSumarNoPrimos() {//Ejercicio3
    int numero;
    int cantidadPrimos = 0;
    int sumaNoPrimos = 0;

    cout << "\nIngrese numeros (ingrese 0 para terminar):\n";

    do {
        cout << "Numero: ";
        cin >> numero;

        if (numero != 0) {
            bool esPrimo = true;

            if (numero <= 1) {
                esPrimo = false;
            } else if (numero == 2) {
                esPrimo = true;
            } else if (numero % 2 == 0) {
                esPrimo = false;
            } else {
                for (int i = 3; i * i <= numero; i += 2) {
                    if (numero % i == 0) {
                        esPrimo = false;
                        break;
                    }
                }
            }

            if (esPrimo) {
                cantidadPrimos++;
            } else {
                sumaNoPrimos += numero;
            }
        }
    } while (numero != 0);

    cout << "\nRESULTADOS n";
    cout << "Cantidad de numeros primos: " << cantidadPrimos << "\n";
    cout << "Suma de numeros no primos: " << sumaNoPrimos << "\n";
}

double promediar_nota(int cantidad, double sumaNotas) {
    return sumaNotas / cantidad;
}

// Ejercicio 5: Contar vocales
int contarVocales(int n, char letras[]) {
    int cont = 0;

    for (int i = 0; i < n; i++) {
        char c = letras[i];
        if (c == '#') break;

        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {

            cont++;
        }
    }

    return cont;
}

// Ejercicio 6: Diferencia absoluta entre suma de dígitos pares e impares
int diferenciaParesImpares(int num) {
    int sumaPares = 0;
    int sumaImpares = 0;

    while (num > 0) {
        int dig = num % 10;

        if (dig % 2 == 0)
            sumaPares += dig;
        else
            sumaImpares += dig;

        num /= 10;
    }

    int diferencia = sumaPares - sumaImpares;
    if (diferencia < 0) diferencia *= -1;

    return diferencia;
}

#endif
