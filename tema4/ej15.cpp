#include <iostream>
#include <array>
using namespace std;

const int MAX= 10;
typedef array<int,MAX> TArray;
struct TNumeros{
    int size;
    TArray elements;
};

void leerArray(TNumeros& num){
    cout<<"Introduzca "<<num.size<<" numeros";
    for (int i= 0; i<num.size; i++){
        cin>>num.elements[i];
    }
}

void criba(const TNumeros& original, TNumeros& repe, int x){

}

int main(){
    int limit;
    do{
        cout<<"Cuantos numeros desea introducir (maximo "<<MAX<<"): ";
        cin>>limit;
    }while(limit<1 || limit>10);
    TNumeros numeros;
    numeros.size = limit;
    leerArray(numeros);

    return 0;
}