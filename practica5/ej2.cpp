#include <iostream>
using namespace std;

int potencia(int base, int exponente){
    int result = 1;
    if (exponente>0){
        result = base * potencia(base, exponente - 1);
    }
    return result;
}

void leerDatos(int& base, int& exponente){
    do{
        cout<<"Introduce la base: ";
        cin>>base;
    }while(base<=0);
    do{
        cout<<"Introduce el exponente: ";
        cin>>exponente;    
    }while(exponente<=0);

}

int main(){
    int base, exponente;
    leerDatos(base, exponente);
    cout<<base<<" elevado a "<<exponente<<" es igual a "<<potencia(base, exponente);
}