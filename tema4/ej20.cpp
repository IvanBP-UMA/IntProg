#include <iostream>
#include <array>
using namespace std;

const int MAX = 4;
typedef array<int,MAX> TFilas;
typedef array<TFilas, MAX> TMatriz;

void leerMatriz(TMatriz& mat){
    cout<<"Introduce los "<<MAX*MAX<<" elementos de la matriz: ";
    for(int i= 0; i<MAX; i++){
        for (int j = 0; j<MAX; j++){
            cin>>mat[i][j];
        }
    }
}

int sumaDiagonal(const TMatriz& mat){
    int res = 0;
    for(int i = 0; i<MAX; i++){
        res += mat[i][i];
    }
    return res;
}

int main(){
    TMatriz matriz;
    leerMatriz(matriz);
    cout<<"La suma de la la diagonal principal es: "<<sumaDiagonal(matriz);
    return 0;
}

//ej19, problema adicional