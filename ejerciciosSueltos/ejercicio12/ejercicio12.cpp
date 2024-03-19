/*Ejercicio 12
Autor: Iván Bezares Pino
*/

#include <iostream>

const int MAYORIA{18};
const int JUBILACION{65};

int main(){
    int edad;
    std::cout<<"Introduce la edad: ";
    std::cin>>edad;
    if (edad<18){
        std::cout<<"Menor de edad";
    }
    else if(edad>=65){
        std::cout<<"Jubilado";
    }
    else{
        std::cout<<"Activo";
    }
    
    return 0;
}