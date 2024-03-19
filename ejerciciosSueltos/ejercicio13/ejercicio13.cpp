/*Ejercicio 13
Autor: Iván Bezares Pino
*/

#include <iostream>

int main(){
    int n1, n2;
    std::cout<<"Introduce dos numeros, separados por espacio: ";
    std::cin>>n1>>n2;
    if (n1%n2 == 0)
    {
        std::cout<<n2<<" es divisor de "<<n1;
    }
    else if (n2%n1 == 0)
    {
        std::cout<<n1<<" es divisor de "<<n2;
    }
    else{
        std::cout<<n1<<" y "<<n2<<" no son divisores"; 
    }

    return 0;
}