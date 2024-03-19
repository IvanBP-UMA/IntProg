#include <iostream>
#include <array>
using namespace std;

const int NUM_FILAS=3;
const int NUM_COLUMNAS=4;
typedef array<int, NUM_COLUMNAS> TFilas;
typedef array<TFilas, NUM_FILAS> TMatriz;

void leerMatriz(TMatriz& mat){
    cout<<"Introduzca la matriz fila a fila ("<<NUM_FILAS<<" x "<<NUM_COLUMNAS<<"): ";
    for(int i= 0; i<NUM_FILAS; i++){
        for(int j=0; j<NUM_COLUMNAS; j++){
            cin>>mat[i][j];
        }
    }
}

bool buscarNum(const TMatriz& mat, int num){
    bool found = false;
    for (int i = 0; i<NUM_FILAS && !found; i++){
        for (int j = 0; j<NUM_COLUMNAS && !found; j++){
            if(mat[i][j] == num){
                found = true;
            }
        } 
    }
    return found;
}

int main(){
    TMatriz matriz;
    int x;
    leerMatriz(matriz);
    cout<<"Introduce el numero entero a buscar: ";
    cin>>x;

    if(buscarNum(matriz, x)){
        cout<<"El numero "<<x<<" esta en la matriz";
    }
    else{
        cout<<"El numero "<<x<<" NO esta en la matriz";
    }
    
    return 0;
}