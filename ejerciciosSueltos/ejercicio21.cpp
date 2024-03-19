//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    bool appears {false};
    int wanted, current;
    do{
        std::cout<<"Introduce el numero a buscar (distinto de 0): ";
        std::cin>>wanted;
    } while (wanted == 0);
    std::cout<<"Introduce una secuencia de numeros enteros terminada en 0, separados por espacio: ";
    
    do{
        std::cin>>current;
        if (current == wanted){appears = true;}
    } while (current != 0);
    
    if (appears){
        std::cout<<"El numero "<<wanted<<" aparece en la secuencia";
    }else{
        std::cout<<"El numero "<<wanted<<" NO aparece en la secuencia";
    }
    
    return 0;
}