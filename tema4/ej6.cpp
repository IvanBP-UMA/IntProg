#include <iostream>
#include <array>
using namespace std;

const int MAX = 10;
typedef array<int,MAX> arr;

void leer(arr& a){
    cout<<"Introduce "<<MAX<<" numeros enteros: ";
    for (int i = 0; i<MAX; i++){
        cin>>a[i];
    }
}

bool find(arr& a, int x){
    bool found = false;
    for (int i= 0; i<MAX && !(found); i++){
        if (a[i] == x){
            found = true;
        }
    }
    return found;
}

int main(){
    int x;
    arr lista;
    leer(lista);
    cout<<"Introduce el numero a buscar: ";
    cin>>x;
    if(find(lista, x)){
        cout<<"El numero "<<x<<" SI esta en la coleccion";
    }else{
        cout<<"El numero "<<x<<" NO esta en la coleccion";
    }

    return 0;
}