//Autor: Iván Bezares Pino
#include <iostream>

int main(){
    char caracterLeido;
    int charCount{0}, comaCount{0};
    std::cout<<"Introduce un texto: ";
    do{
        std::cin>>caracterLeido;
        charCount++;
        if (caracterLeido == ','){comaCount++;}
    } while (caracterLeido != '.');
    std::cout<<"Caracteres: "<<charCount<<"\nDe ellos son comas: "<<comaCount;
    
    return 0;
}