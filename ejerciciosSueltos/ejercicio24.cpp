//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    int current, max, min, total, length;
    float media;
    std::cout<<"Introduce una serie de numeros, separados por espacios: ";
    std::cin>>current;
    length = current;
    max = current;
    min = current;
    total += current;
    for (int i = 1; i<length; i++){
        std::cin>>current;
        total += current;
        if (current > max){
            max = current;
        }
        else if (current < min){
            min = current;
        }
    }
    
    std::cout<<total;
    media = float(total)/float(length);
    std::cout<<"El mayor numero es: "<<max;
    std::cout<<"\nEl menor es: "<<min;
    std::cout<<"\nLa media es: "<<media;

    return 0;
}