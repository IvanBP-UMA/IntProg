#include <iostream>
using namespace std;

int sumaNaturales(int n){
    int suma = n;
    if (n>0){
        suma += sumaNaturales(n-1);
    }
    return suma;
}

void leer(int& n){
    do{
        cout<<"Introduce un numero natural mayor que 0: ";
        cin>>n;
    }while(n<=0);
}

int main(){
    int n;
    leer(n);
    cout<<"La suma de los "<<n<<" primeros numeros naturales es "<<sumaNaturales(n);
}