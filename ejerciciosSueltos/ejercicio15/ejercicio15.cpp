/*Ejercicio 15
Autor: Iván Bezares Pino
*/

#include <iostream>

int main(){
    int numArticulos;
    int precioBase{100};
    std::cout<<"Introduce cuantos articulos vas a comprar: ";
    std::cin>>numArticulos;
    if(numArticulos<5&&numArticulos>0){
        precioBase -= (numArticulos-1)*5;
    }
    else{
        precioBase = 85;
    }
    std::cout<<"El precio final es de "<<precioBase*numArticulos;

    return 0;
}