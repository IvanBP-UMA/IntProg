//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    int base, exponent, resultado{0};
    std::cout<<"Introduce la base y el exponente, separados por espacios: ";
    std::cin>>base>>exponent;
    
    resultado = base;
    for (int i= 1; i<exponent; i++){
        resultado *= base;
    }

    std::cout<<"El resultado de la operacion es: "<<resultado;

    return 0;
}