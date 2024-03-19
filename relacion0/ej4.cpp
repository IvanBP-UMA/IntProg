#include <iostream>

int CONGRUENCIA = "a" - "A";

int main(){
    char letra;
    std::cout<<"Introduce una letra mayuscula: ";
    std::cin>>letra;

    std::cout<<"La letra introducida en minuscula es: "<<char(letra-CONGRUENCIA);
    return 0;
}