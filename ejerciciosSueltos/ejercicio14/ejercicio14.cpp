/*Ejercicio 14
Autor: Iván Bezares Pino
*/

#include <iostream>

int main(){
    int n;
    std::cout<<"Introduce un numero: ";
    std::cin>>n;
    if (!(n%3)||!(n%4)||!(n%5))
    {
        std::cout<<n<<" es divisible entre 3, 4 y/o 5";
    }
    else{
        std::cout<<n<<" no es divisible entre 3 ni 4 ni 5";
    }
    
    return 0;
}