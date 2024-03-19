#include <iostream>

int main(){
    int value, n, result{1}, contador{1};
    bool found {false};
    std::cout<<"Introduzca un numero y la n de la raiz enesima: ";
    std::cin>>value>>n;

    while(!found){
        for (int i= 0; i<n; i++){
            result *= contador;
        }
        if(result>=value){
            found = true;
        }
        else{
            result = 1;
            contador++;
        }
    }

    std::cout<<"La raiz real es "<<contador - 1;
    return 0;
}