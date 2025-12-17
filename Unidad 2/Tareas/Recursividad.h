#ifndef RECURSIVIDAD_H_INCLUDED
#define RECURSIVIDAD_H_INCLUDED
#include <iostream>
using namespace std;

//Ejercicio7
int sumaRecursiva(int n) {
    if (n == 1)      // C.base
        return 1;

    return n + sumaRecursiva(n - 1);   // recursiva
}

//Ejercicio8
int factorial(int n) {
    if (n == 0 || n == 1)    // C.base
        return 1;

    return n * factorial(n - 1);   // recursivo
}

//Ejercicio9
int mcd(int a, int b) {
    if (b == 0)      // C.base
        return a;

    return mcd(b, a % b);   // Recursivo
}

//Ejercicio10
void imprimirAscendente(int n) {
    if (n == 0) return;   // C.base

    imprimirAscendente(n - 1);
    cout << n << " ";
}

//Ejercicio11
int fibonacci(int n) {
    if (n == 0) return 0;  // C.base 1
    if (n == 1) return 1;  // C.base 2

    return fibonacci(n - 1) + fibonacci(n - 2);
}

//Ejercicio12
int ackermann(int m, int n) {
    if (m == 0)
        return n + 1;

    if (m > 0 && n == 0)
        return ackermann(m - 1, 1);

    return ackermann(m - 1, ackermann(m, n - 1));  // Recursión anidada
}

//Ejercicio13
int mcCarthy91(int n) {
    if (n > 100)
        return n - 10;

    return mcCarthy91(mcCarthy91(n + 11));
}

//Ejercicio15
bool esImpar(int n);  // declaracion

bool esPar(int n) {
    if (n == 0) return true;   // C.base
    return esImpar(n - 1);
}

bool esImpar(int n) {
    if (n == 0) return false;  // Caso base
    return esPar(n - 1);
}





#endif // RECURSIVIDAD_H_INCLUDED
