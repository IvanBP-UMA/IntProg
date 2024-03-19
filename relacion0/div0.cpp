#include <iostream>

int main(){
    int num, denom;
    std::cout<<"Introduce el numerador: ";
    std::cin>>num;
    do
    {
        std::cout<<"Introduce el denominador, ha de ser distinto de 0: ";
        std::cin>>denom;
    } while (denom==0);

    std::cout<<"El resultado de la division es: "<<num/denom;
     
    return 0;
}