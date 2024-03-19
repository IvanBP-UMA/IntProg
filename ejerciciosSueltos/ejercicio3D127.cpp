//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    int n1, n2, resultado{0};
    std::cout<<"Introduzca dos numeros por teclado para multiplicar, separados por espacio: ";
    std::cin>>n1>>n2;

    for (int i = 0; i<n2; i++){
        resultado += n1;
    }

    std::cout<<"El resultado de la operacion multiplicacion es "<<resultado;
    return 0;
}