#include<iostream>
#include<cctype>
#include <locale.h>

using namespace std;
const int MAX=5;
int mostrar_menu(){
    int menu;
    cout<<"Opciones del menu"<<endl;
    cout<<"1. Rotación hacia la derecha"<<endl;
    cout<<"2. Mayor/Menor"<<endl;
    cout<<"3. Eliminar un elemnto "<<endl;
    cout<<"4. Creciente/Decreciente "<<endl;
    cout<<"5. Arreglo combinado "<<endl;
    cout<<"6. Suma Diagonales "<<endl;
    cout<<"7. Matriz Transpuesta "<<endl;
    cout<<"8. Suma fila o columna "<<endl;
    cout<<"Seleccione la opcion a ejecutar: ";
    cin>>menu;
    return menu;
}
void ingresar_arreglo(int arrays[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Ingrese el tamaño del arreglo [" << i << "]: ";
        cin >> arrays[i];
    }
}
void imprimir(int arrays[], int tam){
    for(int i = 0; i < tam; i++){
        cout << arrays[i]<<"," << " ";
    }
    cout << endl;
}
void ingresar_matriz(int matriz[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}
void mostrar_matriz(int matriz[MAX][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
void ingresar_matrizmn(int matriz[MAX][MAX], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}
void mostrar_matrizmn(int matriz[MAX][MAX], int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}



void ordenarMayorMenor(int arr[], int tam){
    for(int i=0;i<tam-1;i++){
        for(int j=i+1;j<tam;j++){
            if(arr[i] < arr[j]){
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}
bool eliminarElemento(int arr[], int &tam, int valor){
    int pos = -1;

    for(int i=0;i<tam;i++){
        if(arr[i] == valor){
            pos = i;
            break;
        }
    }

    if(pos == -1)
        return false;

    for(int i=pos;i<tam-1;i++){
        arr[i] = arr[i+1];
    }
    tam--;
    return true;
}

bool esCreciente(int arr[], int tam){
    for(int i=0;i<tam-1;i++){
        if(arr[i] >= arr[i+1])
            return false;
    }
    return true;
}
int main(){
    int menu, tamanio = 0;
    char continuar;
    setlocale(LC_ALL, "");
    do{
        menu = mostrar_menu();

        switch(menu){

        case 1:{
            cout<<"1. Rotación hacia la derecha"<<endl;
            cout<<"Ingrese el tamaño del arreglo"<<endl;
            cin>>tamanio;

            int numeros[tamanio];

            for (int i=0;i<tamanio;i++){
                cout<<"Ingrese el valor "<<i+1<<":"<<endl;
                cin>>numeros[i];
            }

            int aux = numeros[tamanio - 1];
            for(int i = tamanio - 1; i > 0; i--){
                numeros[i] = numeros[i - 1];
            }
            numeros[0] = aux;

            cout<<"Arreglo rotado:"<<endl;
            imprimir(numeros,tamanio);
        }break;

        case 2:{
            cout<<"Ingrese el tamaño del arreglo: ";
            cin>>tamanio;

            int arr[tamanio];
            cout<<"Ingrese los elementos del arreglo:"<<endl;
            for(int i=0;i<tamanio;i++){
                cin>>arr[i];
            }

            ordenarMayorMenor(arr,tamanio);

            cout<<"Arreglo ordenado de mayor a menor:"<<endl;
            imprimir(arr,tamanio);
        }break;

        case 3:{
             cout<<"Ingrese el tamaño del arreglo: ";
        cin>>tamanio;

        int arr[tamanio];

        for(int i=0;i<tamanio;i++){
        cin>>arr[i];
        }

        cout<<"Arreglo original:"<<endl;
        imprimir(arr,tamanio);

        int eliminar;
        cout<<"Elemento a eliminar: ";
        cin>>eliminar;

    if(eliminarElemento(arr, tamanio, eliminar)){
        cout<<"Arreglo resultante:"<<endl;
        imprimir(arr,tamanio);
    }else{
        cout<<"El elemento no existe"<<endl;
    }
        }break;

        case 4:{
            cout<<"Ingrese el tamaño del arreglo: ";
            cin>>tamanio;

            int arr[tamanio];
            for(int i=0;i<tamanio;i++){
                cout<<"Index "<<i<<": ";
                cin>>arr[i];
            }

            if(esCreciente(arr,tamanio)){
                cout<<"Ordenado Ascendentemente !!"<<endl;
            }else{
                cout<<"NO esta ordenado ascendentemente"<<endl;
            }

            for(int i=0;i<tamanio;i++){
                cout<<"Elemento "<<i+1<<" : "<<arr[i]<<endl;
            }
        }break;
        case 5:{
            int n;
            cout << "Ingrese el tamaño de los arreglos: ";
            cin >> n;
            int A[n], B[n], C[2*n];
            cout << "\nIngrese arreglo A\n";
            ingresar_arreglo(A, n);

            cout << "\nIngrese arreglo B\n";
            ingresar_arreglo(B, n);
            int j = 0;
            for(int i = 0; i < n; i++) {
                C[j] = A[i];
                C[j + 1] = B[i];
                j += 2;
            }
            cout << "\nArreglo A: ";
            imprimir(A, n);
            cout << "Arreglo B: ";
            imprimir(B, n);
            cout << "Arreglo C intercalado: ";
            imprimir(C, 2*n);
                }

            break;
        case 6:{
            int n;
            cout << "Ingrese el tamaño de la matriz: ";
            cin >> n;
            int matriz[MAX][MAX];
            cout << "Ingrese los valores de la matriz:\n";
            ingresar_matriz(matriz, n);
            cout << "\nMatriz ingresada:\n";
            mostrar_matriz(matriz, n);

            int diagoPrincipal = 0;
            int diagoSecundaria = 0;

            for(int i = 0; i < n; i++) {
                diagoPrincipal += matriz[i][i];
                diagoSecundaria += matriz[i][n - 1 - i];
            }
            cout << "\nSuma diagonal principal: " << diagoPrincipal << endl;
            cout << "Suma diagonal secundaria: " << diagoSecundaria << endl;
        }
            break;
        case 7:{
        int m, n;
        cout << "Ingrese el numero de filas: ";
        cin >> m;
        cout << "Ingrese el numero de columnas: ";
        cin >> n;
        int matriz[MAX][MAX];
        int transpuesta[MAX][MAX];
        cout << "\nIngrese los elementos de la matriz original:\n";
        ingresar_matrizmn(matriz, m, n);

        cout << "\nMatriz original:\n";
        mostrar_matrizmn(matriz, m, n);
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                transpuesta[j][i] = matriz[i][j];
            }
        }

        cout << "\nMatriz transpuesta:\n";
        mostrar_matrizmn(transpuesta, n, m);
    }
            break;
        case 8:{
            int m, n;
            cout << "Ingrese el numero de filas: ";
            cin >> m;
            cout << "Ingrese el numero de columnas: ";
            cin >> n;
            int matriz[MAX][MAX];

            cout << "\nIngrese los elementos de la matriz:\n";
            ingresar_matrizmn(matriz, m, n);

            cout << "\nMatriz ingresada:\n";
            mostrar_matrizmn(matriz, m, n);
            cout << "\nSuma de filaS:\n";
            for(int i = 0; i < m; i++) {
                int sumFila = 0;
                for(int j = 0; j < n; j++) {
                    sumFila += matriz[i][j];
                }
                cout << "Suma fila " << i + 1 << " = " << sumFila << endl;
            }
            cout << "\nSuma de columnaS:\n";
            for(int j = 0; j < n; j++) {
                int sumColumna = 0;
                for(int i = 0; i < m; i++) {
                    sumColumna += matriz[i][j];
                }
                cout << "Suma columna " << j + 1 << " = " << sumColumna << endl;
            }
        }
            break;

        default:
            cout<<"Opcion no disponible"<<endl;
        }

        cout<<"Desea ejecutar nuevamente el programa (s)? ";
        cin>>continuar;

    }while(tolower(continuar) == 's');

    cout<<"Adios!!";

    return 0;
}
